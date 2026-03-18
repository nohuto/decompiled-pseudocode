/*
 * XREFs of PpmPerfResizeHistoryAll @ 0x14056AC74
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x140569F90 (PpmReapplyPerfPolicy.c)
 * Callees:
 *     PpmGetHeterogeneousClass @ 0x1400D3FC8 (PpmGetHeterogeneousClass.c)
 *     KeGetPrcb @ 0x1400D3FF8 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1400D53B0 (KeEnumerateNextProcessor.c)
 *     PpmPerfResetHistory @ 0x140144278 (PpmPerfResetHistory.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
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

  v8[1] = (unsigned __int16 *)qword_1402F8878[0];
  v8[0] = (unsigned __int16 *)PpmCheckRegistered;
  v9 = 0;
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&v10, v8);
    if ( (_DWORD)result )
      return result;
    Prcb = KeGetPrcb(v10);
    v2 = *((_BYTE *)&PpmCurrentProfile[174 * dword_140303E0C + 8] + PpmGetHeterogeneousClass(Prcb));
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
