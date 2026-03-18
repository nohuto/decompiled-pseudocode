/*
 * XREFs of PpmPerfResizeHistoryAll @ 0x1405379AC
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x140537218 (PpmReapplyPerfPolicy.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x14009C650 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
 *     PpmPerfResetHistory @ 0x140139800 (PpmPerfResetHistory.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 PpmPerfResizeHistoryAll()
{
  __int64 result; // rax
  __int64 Prcb; // rdi
  unsigned __int8 v2; // bl
  _DWORD *v3; // rcx
  int v4; // esi
  unsigned int v5; // ebp
  _DWORD *PoolWithTag; // rax
  _DWORD *v7; // rbx
  unsigned __int16 *v8[2]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v9; // [rsp+30h] [rbp-28h]
  ULONG v10; // [rsp+60h] [rbp+8h] BYREF

  v8[1] = (unsigned __int16 *)qword_1402D17F8[0];
  v8[0] = (unsigned __int16 *)PpmCheckRegistered;
  v9 = 0;
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&v10, v8);
    if ( (_DWORD)result )
      return result;
    Prcb = KeGetPrcb(v10);
    v2 = *((_BYTE *)&PpmCurrentProfile[174 * dword_1402DE28C + 8] + *(unsigned __int8 *)(Prcb + 23858));
    v3 = *(_DWORD **)(Prcb + 24208);
    if ( v3 )
    {
      if ( *v3 != v2 )
      {
        ExFreePoolWithTag(v3, 0x704D5050u);
        *(_QWORD *)(Prcb + 24208) = 0LL;
        goto LABEL_4;
      }
    }
    else
    {
LABEL_4:
      if ( v2 > 1u )
      {
        v4 = v2;
        v5 = 8 * v2 + 28;
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x704D5050u);
        v7 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, v5);
          *v7 = v4;
          *(_QWORD *)(Prcb + 24208) = v7;
          PpmPerfResetHistory(Prcb);
        }
      }
    }
  }
}
