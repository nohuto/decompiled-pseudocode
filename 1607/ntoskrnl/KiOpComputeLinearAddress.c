/*
 * XREFs of KiOpComputeLinearAddress @ 0x1401DAF9C
 * Callers:
 *     KiOpRetrieveRegMemAddress @ 0x1401DB32C (KiOpRetrieveRegMemAddress.c)
 * Callees:
 *     KeIsAttachedProcess @ 0x1400E5D20 (KeIsAttachedProcess.c)
 */

__int64 __fastcall KiOpComputeLinearAddress(__int64 a1, __int64 *a2)
{
  struct _KTHREAD *CurrentThread; // r9
  __int64 v3; // rdi
  __int64 v5; // rsi
  char v6; // r11
  KPCR *Object; // rdx
  __int16 v8; // r10

  CurrentThread = KeGetCurrentThread();
  v3 = a1;
  v5 = *a2;
  v6 = *(_BYTE *)(a1 + 73);
  _BitScanForward((unsigned int *)&a1, *(_DWORD *)(a1 + 40));
  Object = 0LL;
  v8 = *(_WORD *)(*(unsigned int *)&KiOpSegmentOffsetTable[2 * a1] + *(_QWORD *)(v3 + 16));
  if ( 1 << a1 == 32 )
  {
    if ( v6 )
    {
      Object = (KPCR *)CurrentThread[1].WaitBlock[2].Object;
      if ( !Object )
      {
        if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeIsAttachedProcess() )
          Object = 0LL;
        else
          Object = (KPCR *)KeGetCurrentThread()->Teb;
      }
    }
    else
    {
      Object = KeGetPcr();
    }
    goto LABEL_4;
  }
  if ( 1 << a1 == 16 )
  {
    Object = (KPCR *)CurrentThread[1].WaitBlock[2].Thread;
    if ( !Object )
    {
      Object = (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeIsAttachedProcess()
             ? 0LL
             : (KPCR *)KeGetCurrentThread()->Teb;
      if ( Object )
        Object = (KPCR *)((char *)Object + 0x2000);
    }
    goto LABEL_4;
  }
  if ( v6 != 1 || !*(_BYTE *)(v3 + 50) || ((v8 - 35) & 0xFFE7) == 0 && v8 != 59 )
  {
LABEL_4:
    *a2 = (__int64)Object + v5;
    return 0LL;
  }
  *a2 = 0x7FFFFFFF0000LL;
  return 3221225477LL;
}
