/*
 * XREFs of ?ReferenceHandleAndLock@CChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C001196C
 * Callers:
 *     ?ReferenceHandleAndLock@CDwmChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0011910 (-ReferenceHandleAndLock@CDwmChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 * Callees:
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0045F38 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C0046F10 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 */

__int64 __fastcall DirectComposition::CChannel::ReferenceHandleAndLock(int a1, struct DirectComposition::CChannel **a2)
{
  unsigned int v4; // edi
  __int64 v5; // rbx
  struct DirectComposition::CProcessData *v6; // rax
  struct DirectComposition::CProcessData *v7; // rsi
  struct _RTL_GENERIC_TABLE *v8; // rcx
  _QWORD *v9; // rax
  int Buffer; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h]

  v4 = 0;
  v5 = 0LL;
  v6 = DirectComposition::CProcessData::Current();
  v7 = v6;
  if ( v6 )
  {
    DirectComposition::CCriticalSection::AcquireExclusive(*((DirectComposition::CCriticalSection **)v6 + 1));
    v8 = *(struct _RTL_GENERIC_TABLE **)v7;
    Buffer = a1;
    v12 = 0LL;
    v9 = RtlLookupElementGenericTable(v8, &Buffer);
    if ( v9 )
      v5 = v9[1];
    if ( v5 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    else
      v4 = -1073741790;
    ExReleaseResourceLite(*((PERESOURCE *)v7 + 1));
    KeLeaveCriticalRegion();
  }
  else
  {
    v4 = -1073741823;
  }
  if ( v5 )
  {
    DirectComposition::CCriticalSection::AcquireExclusive(*(DirectComposition::CCriticalSection **)(v5 + 32));
    *a2 = (struct DirectComposition::CChannel *)v5;
  }
  return v4;
}
