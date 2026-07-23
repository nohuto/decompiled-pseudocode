/*
 * XREFs of HvlpSlowFlushPasidAddressList @ 0x1401EC12C
 * Callers:
 *     HvlSvmFlushPasid @ 0x1401EAFA0 (HvlSvmFlushPasid.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     HvlpFlushPasidAddressSpace @ 0x1401EBCF4 (HvlpFlushPasidAddressSpace.c)
 */

PSLIST_ENTRY __fastcall HvlpSlowFlushPasidAddressList(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        const void *a4)
{
  char v6; // r15
  __int16 v7; // bx
  char v8; // si
  bool v9; // bl
  _SLIST_ENTRY *HypercallCachedPages; // rax
  _SLIST_ENTRY *v11; // r14
  struct _KPRCB *CurrentPrcb; // rdi
  _SLIST_ENTRY *Next; // rbp
  PSLIST_ENTRY result; // rax
  struct _KPRCB *v15; // rcx
  __int64 v16; // [rsp+20h] [rbp-68h]
  struct _KPRCB *v17; // [rsp+30h] [rbp-58h]
  _SLIST_ENTRY *v18; // [rsp+38h] [rbp-50h]
  __int16 v19; // [rsp+80h] [rbp-8h]

  if ( (HvlpFlags & 0x10) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    HypercallCachedPages = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
    if ( !HypercallCachedPages )
      return (PSLIST_ENTRY)HvlpFlushPasidAddressSpace(a1, a2);
    v6 = 1;
    v8 = BYTE4(CurrentPrcb);
    v11 = HypercallCachedPages;
    v9 = (char)CurrentPrcb;
  }
  else
  {
    v6 = 4;
    v7 = v19;
    _disable();
    v8 = 5;
    HIDWORD(v17) = 5;
    v9 = (v7 & 0x200) != 0;
    HypercallCachedPages = (_SLIST_ENTRY *)KeGetCurrentPrcb()->HypercallCachedPages;
    LOBYTE(v17) = v9;
    v11 = v18;
    CurrentPrcb = v17;
  }
  Next = HypercallCachedPages[1].Next;
  HypercallCachedPages->Next = 0LL;
  *((_QWORD *)&HypercallCachedPages->Next + 1) = 0LL;
  LODWORD(HypercallCachedPages->Next) = a2;
  HIDWORD(HypercallCachedPages->Next) = a1;
  memmove(&HypercallCachedPages[1], a4, 8LL * a3);
  LODWORD(v16) = 161;
  HIDWORD(v16) = a3 & 0xFFF;
  HvlpHypercallCodeVa(v16, Next, 0LL);
  result = 0LL;
  if ( (v6 & 1) != 0 )
  {
    v11[1].Next = Next;
    return RtlpInterlockedPushEntrySList(&CurrentPrcb->HypercallPageList, v11);
  }
  else
  {
    v15 = KeGetCurrentPrcb();
    if ( (v8 & 1) != 0 )
    {
      result = (PSLIST_ENTRY)v15->HypercallCachedPages;
    }
    else if ( (v8 & 2) != 0 )
    {
      result = (PSLIST_ENTRY)((char *)v15->HypercallCachedPages + 4096);
    }
    result[1].Next = Next;
    if ( v9 )
      _enable();
  }
  return result;
}
