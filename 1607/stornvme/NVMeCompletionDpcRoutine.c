/*
 * XREFs of NVMeCompletionDpcRoutine @ 0x1C0001F70
 * Callers:
 *     NVMeHwMSIInterrupt @ 0x1C00028B0 (NVMeHwMSIInterrupt.c)
 *     ProcessCompletionQueues @ 0x1C000E914 (ProcessCompletionQueues.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002E00 (_guard_dispatch_icall_nop.c)
 *     GetLocalCommand @ 0x1C000561C (GetLocalCommand.c)
 *     CalculateTimeDurationIn100ns @ 0x1C000C7F0 (CalculateTimeDurationIn100ns.c)
 *     NVMeMapError @ 0x1C000D604 (NVMeMapError.c)
 *     RecordCommandTimingHistory @ 0x1C000EAEC (RecordCommandTimingHistory.c)
 */

__int64 __fastcall NVMeCompletionDpcRoutine(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v4; // di
  __int64 v5; // rbp
  __int64 v7; // r9
  unsigned __int16 v8; // cx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 result; // rax
  unsigned __int16 v12; // r12
  __int64 v13; // r13
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r14
  __int16 v17; // ax
  __int64 v18; // rcx
  __int64 v19; // rcx
  void (__fastcall *v20)(__int64, __int64, __int64, __int64); // rax
  __int64 v21; // rbp
  unsigned __int64 v22; // rax
  unsigned int v23; // eax
  _DWORD *LocalCommand; // rax
  int v25; // ecx
  bool v26; // zf
  __int128 v27; // xmm0
  int v28; // ecx
  signed __int32 v29[8]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v30; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v31; // [rsp+28h] [rbp-50h]
  __int64 v32; // [rsp+30h] [rbp-48h]
  __int16 v33; // [rsp+88h] [rbp+10h]

  v4 = 0;
  v5 = *(_QWORD *)a3 + 16LL * *(unsigned __int16 *)(a3 + 98);
  v31 = 0LL;
  v30 = 0LL;
  v32 = 0LL;
  v33 = 0;
  if ( *(_BYTE *)(a2 + 17) || (*(_DWORD *)(a2 + 88) & 2) != 0 )
    StorPortExtendedFunction(47LL, a2, &v30);
  if ( (*(_WORD *)(v5 + 14) & 1) == *(_WORD *)(a3 + 100) )
  {
LABEL_50:
    result = *(unsigned __int16 *)(a3 + 98);
    *(_WORD *)(a3 + 132) = result;
    v27 = *(_OWORD *)v5;
    *(_WORD *)(a3 + 128) = v4;
    *(_OWORD *)(a3 + 152) = v27;
    if ( v4 )
    {
      v28 = (unsigned __int16)result;
      result = *(_QWORD *)(a3 + 16);
      *(_DWORD *)result = v28;
      _InterlockedOr(v29, 0);
    }
  }
  else
  {
    v7 = 510LL;
    while ( 1 )
    {
      v8 = *(_WORD *)(v5 + 10);
      v9 = *(unsigned __int16 *)(v5 + 12);
      v10 = *(unsigned __int16 *)(v5 + 8);
      if ( *(_WORD *)(a3 + 96) )
      {
        result = *(unsigned int *)(a2 + 20);
        if ( (result & 1) == 0 )
          break;
      }
      if ( v8 )
      {
        v12 = *(_WORD *)(a2 + 230);
        v13 = *(_QWORD *)(a2 + 544) + 136LL * (v8 - 1);
      }
      else
      {
        v12 = *(_WORD *)(a2 + 228);
        v13 = a2 + 240;
      }
      result = *(_QWORD *)(v13 + 32) + 16LL * (unsigned __int16)v9;
      v14 = _InterlockedExchange64((volatile __int64 *)result, 0LL);
      if ( !v14 )
        break;
      if ( *(_BYTE *)(v14 + 2) == 40 )
        v15 = *(_QWORD *)(v14 + 104);
      else
        v15 = *(_QWORD *)(v14 + 56);
      if ( (v15 & 0xFFF) != 0 )
        v15 = v15 - (v15 & 0xFFF) + 4096;
      *(_WORD *)(v13 + 46) = v10;
      if ( *(_BYTE *)(v14 + 2) == 40 )
        v16 = *(unsigned __int8 *)(*(unsigned int *)(v14 + 52) + v14 + 10);
      else
        v16 = *(unsigned __int8 *)(v14 + 7);
      v17 = *(_WORD *)(v5 + 14);
      *(_WORD *)(v15 + 4242) = v17;
      if ( (v17 & 0xE00) != 0 || (v17 & 0x1FE) != 0 )
      {
        NVMeMapError(v14, v9, v10, 510LL);
        if ( *(_DWORD *)(a2 + 148) > (unsigned int)v16 )
        {
          v19 = *(_QWORD *)(a2 + 8 * v16 + 1184);
          if ( v19 )
            ++*(_DWORD *)(v19 + 32);
        }
      }
      else
      {
        *(_BYTE *)(v14 + 3) = 1;
        if ( *(_DWORD *)(a2 + 148) > (unsigned int)v16 )
        {
          v18 = *(_QWORD *)(a2 + 8 * v16 + 1184);
          if ( v18 )
            ++*(_QWORD *)(v18 + 24);
        }
      }
      v20 = *(void (__fastcall **)(__int64, __int64, __int64, __int64))(v15 + 4216);
      if ( v20 )
        v20(a2, v14, v5, v7);
      else
        *(_BYTE *)(v15 + 4245) |= 8u;
      if ( *(_QWORD *)(v15 + 4160) )
      {
        v21 = 0LL;
        StorPortExtendedFunction(47LL, a2, &v30);
        if ( *(_BYTE *)(a2 + 17) )
        {
          v22 = *(_QWORD *)(v15 + 4160);
          if ( v31 >= v22 )
            v21 = CalculateTimeDurationIn100ns(v31 - v22, v30);
          StorPortNotification(4102LL, a2, v21);
        }
        if ( (*(_DWORD *)(a2 + 88) & 2) != 0 )
        {
          *(_QWORD *)(v15 + 4184) = v32;
          *(_QWORD *)(v15 + 4192) = v31;
          RecordCommandTimingHistory(a2, v14, v30);
        }
      }
      if ( (*(_BYTE *)(v15 + 4245) & 8) != 0 )
      {
        if ( v14 != a2 + 568 )
        {
          v23 = 0;
          while ( v14 != 104LL * v23 + a2 + 672 )
          {
            if ( ++v23 >= 4 )
            {
              StorPortNotification(0LL, a2, v14);
              goto LABEL_46;
            }
          }
        }
        LocalCommand = (_DWORD *)GetLocalCommand(a2, v14);
        if ( LocalCommand )
          *LocalCommand = 0;
      }
LABEL_46:
      ++*(_DWORD *)(v13 + 132);
      _InterlockedDecrement16((volatile signed __int16 *)(v13 + 128));
      v25 = *(unsigned __int16 *)(a3 + 98);
      if ( v25 >= v12 - 1 )
      {
        v26 = *(_WORD *)(a3 + 100) == 1;
        *(_WORD *)(a3 + 98) = 0;
        *(_WORD *)(a3 + 100) = !v26;
      }
      else
      {
        *(_WORD *)(a3 + 98) = v25 + 1;
      }
      v7 = 510LL;
      v4 = v33 + 1;
      v5 = *(_QWORD *)a3 + 16LL * *(unsigned __int16 *)(a3 + 98);
      ++v33;
      if ( (*(_WORD *)(v5 + 14) & 1) == *(_WORD *)(a3 + 100) )
        goto LABEL_50;
    }
  }
  if ( *(_BYTE *)(a2 + 18) == 1 )
  {
    result = (unsigned int)(*(_DWORD *)(a2 + 12) - 1);
    if ( (unsigned int)result <= 1 )
    {
      result = *(_QWORD *)(a2 + 112);
      *(_DWORD *)(result + 16) = 1 << *(_WORD *)(a3 + 96);
      _InterlockedOr(v29, 0);
      *(_BYTE *)(a2 + 18) = 0;
    }
  }
  return result;
}
