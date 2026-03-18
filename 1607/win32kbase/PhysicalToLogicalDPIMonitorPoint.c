/*
 * XREFs of PhysicalToLogicalDPIMonitorPoint @ 0x1C0037CB0
 * Callers:
 *     PhysicalToLogicalDPIPoint @ 0x1C0037BE0 (PhysicalToLogicalDPIPoint.c)
 * Callees:
 *     Is_MonitorFromPointSupported_0 @ 0x1C00027D0 (Is_MonitorFromPointSupported_0.c)
 *     _MonitorFromPoint_0 @ 0x1C00027D8 (_MonitorFromPoint_0.c)
 *     OriginFromMonFlags @ 0x1C0037C70 (OriginFromMonFlags.c)
 *     EngMulDiv @ 0x1C0038200 (EngMulDiv.c)
 *     ?ValidateMonFlags@@YAHPEAK@Z @ 0x1C003826C (-ValidateMonFlags@@YAHPEAK@Z.c)
 */

__int64 __fastcall PhysicalToLogicalDPIMonitorPoint(_DWORD *a1, _DWORD *a2, unsigned int a3, __int64 *a4)
{
  __int64 v7; // rsi
  unsigned int v8; // ebp
  __int64 *v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rdi
  unsigned __int16 v12; // cx
  INT v13; // ebp
  INT v14; // r8d
  INT v15; // esi
  unsigned int v17[10]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v18; // [rsp+60h] [rbp+18h] BYREF

  v18 = a3;
  if ( (unsigned int)ValidateMonFlags(&v18) && (int)Is_MonitorFromPointSupported_0() >= 0 )
  {
    if ( a4 )
      v7 = *a4;
    else
      v7 = 0LL;
    v8 = v18;
    if ( !v7 )
      v7 = MonitorFromPoint_0();
    if ( a4 )
      *a4 = v7;
    v17[0] = 32;
    ValidateMonFlags(v17);
    if ( (v17[0] & 0x40) != 0 )
    {
      v9 = (__int64 *)(v7 + 44);
    }
    else
    {
      v9 = (__int64 *)(v7 + 60);
      if ( SLOBYTE(v17[0]) >= 0 )
        v9 = (__int64 *)(v7 + 28);
    }
    v10 = *v9;
    *(_QWORD *)v17 = v10;
    v11 = OriginFromMonFlags(v8, v7);
    if ( (v8 & 0x40) != 0 )
      v12 = 96;
    else
      v12 = *((_WORD *)gpsi + 4339);
    v13 = v12;
    v14 = *(unsigned __int16 *)(v7 + 154);
    v15 = v14;
    *a1 = v11 + EngMulDiv(*a2 - v10, v12, v14);
    a1[1] = HIDWORD(v11) + EngMulDiv(a2[1] - v17[1], v13, v15);
    return 1LL;
  }
  else
  {
    *(_QWORD *)a1 = *(_QWORD *)a2;
    return 0LL;
  }
}
