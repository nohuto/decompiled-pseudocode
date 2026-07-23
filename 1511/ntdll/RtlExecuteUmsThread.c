/*
 * XREFs of RtlExecuteUmsThread @ 0x1800E37B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentUmsThread @ 0x180067430 (RtlGetCurrentUmsThread.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 *     RtlpExecuteUmsThread @ 0x1800A9491 (RtlpExecuteUmsThread.c)
 *     RtlpLoadUmsDebugRegisterState @ 0x1800F3480 (RtlpLoadUmsDebugRegisterState.c)
 */

__int64 __fastcall RtlExecuteUmsThread(__int64 a1)
{
  __int64 result; // rax
  char v3; // di
  int v4; // ecx
  unsigned int v5; // ebx
  struct _TEB **v6; // [rsp+20h] [rbp-58h] BYREF
  _BYTE Fields[6]; // [rsp+28h] [rbp-50h] BYREF
  __int16 v8; // [rsp+2Eh] [rbp-4Ah]
  int v9; // [rsp+48h] [rbp-30h]
  int v10; // [rsp+4Ch] [rbp-2Ch]
  int v11; // [rsp+50h] [rbp-28h]
  int v12; // [rsp+54h] [rbp-24h]
  int v13; // [rsp+58h] [rbp-20h]

  if ( !a1 )
    return 3221225485LL;
  v3 = 0;
  result = RtlGetCurrentUmsThread(&v6);
  if ( (int)result >= 0 )
  {
    if ( ((_DWORD)v6[158] & 1) != 0 )
      return 3221225659LL;
    if ( (*(_DWORD *)(a1 + 1264) & 1) == 0 )
      return 3221225485LL;
    if ( (*(_DWORD *)(a1 + 1264) & 0x10) != 0 || ((_DWORD)v6[158] & 0x10) != 0 )
    {
      result = RtlpLoadUmsDebugRegisterState(a1);
      if ( (int)result < 0 )
        return result;
      v3 = 1;
    }
    ++*(_DWORD *)(a1 + 1288);
    if ( MEMORY[0x7FFE038C]
      && *(_DWORD *)(a1 + 1288) == 1000 * (*(_DWORD *)(a1 + 1288) / 0x3E8u)
      && (*(_DWORD *)(a1 + 1264) & 8) == 0 )
    {
      v8 = 6436;
      v4 = *(_DWORD *)(*(_QWORD *)(a1 + 1248) + 72LL);
      v10 = *(_DWORD *)(a1 + 1288);
      v12 = *(_DWORD *)(a1 + 1296);
      v11 = *(_DWORD *)(a1 + 1292);
      v13 = *(_DWORD *)(a1 + 1300);
      v9 = v4;
      NtTraceEvent((HANDLE)MEMORY[0x7FFE038C], 0x20402u, 0x14u, Fields);
    }
    RtlpExecuteUmsThread(a1);
    if ( (*(_QWORD *)(a1 + 1272) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    {
      v5 = -1073741595;
    }
    else if ( (*(_DWORD *)(a1 + 1264) & 8) != 0 )
    {
      v5 = -1073740004;
    }
    else
    {
      v5 = (*(_DWORD *)(a1 + 1264) & 2) != 0 ? -1073740004 : -1073741267;
    }
    if ( v3 )
      RtlpLoadUmsDebugRegisterState(v6);
    return v5;
  }
  return result;
}
