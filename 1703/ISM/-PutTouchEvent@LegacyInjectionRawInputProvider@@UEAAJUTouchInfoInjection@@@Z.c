/*
 * XREFs of ?PutTouchEvent@LegacyInjectionRawInputProvider@@UEAAJUTouchInfoInjection@@@Z @ 0x18006FA70
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     Template_p @ 0x18006EE84 (Template_p.c)
 *     ?FillPointerInfo@LegacyInjectionRawInputProvider@@AEAAXPEAUtagPOINTER_INFO@@AEBUTouchContact@@HAEAUtagLegacyISMPOSTINPUTINFO@@@Z @ 0x18006FDDC (-FillPointerInfo@LegacyInjectionRawInputProvider@@AEAAXPEAUtagPOINTER_INFO@@AEBUTouchContact@@HA.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LegacyInjectionRawInputProvider::PutTouchEvent(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx
  _DWORD *v8; // rcx
  unsigned int v9; // eax
  int *v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rdx
  bool v13; // zf
  int v14; // eax
  char v15; // al
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // r14d
  unsigned int v19; // edx
  __int64 v20; // rsi
  __int16 v21; // r15
  int v22; // r11d
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  int v26; // r9d
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v29[118]; // [rsp+40h] [rbp-C0h] BYREF

  v5 = 0;
  if ( !*(_BYTE *)(a1 + 72) )
  {
    LOBYTE(a3) = 1;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, 2LL, a3);
    v5 = v6;
    if ( v6 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v7, &MinInput_Warning_CheckResult, 0, 580, v6);
      goto LABEL_37;
    }
  }
  if ( !*(_BYTE *)(a2 + 23) )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 1) != 0 )
      Template_p();
    return v5;
  }
  QueryPerformanceCounter(&PerformanceCount);
  if ( (gdwMitConfig & 4) != 0 )
  {
    memset(v29, 0, 0x3D8uLL);
    v18 = 0;
    DWORD1(v29[0]) = *(_DWORD *)(a2 + 4);
    *((LARGE_INTEGER *)&v29[0] + 1) = PerformanceCount;
    if ( *(_BYTE *)(a2 + 23) )
    {
      v19 = v29[0];
      while ( 1 )
      {
        v20 = a2 + 56LL * v18;
        v21 = *(_WORD *)(v20 + 26);
        if ( v21 == 5 )
          *(_WORD *)(v20 + 26) = 9;
        LegacyInjectionRawInputProvider::FillPointerInfo(
          (LegacyInjectionRawInputProvider *)(96LL * v19),
          (struct tagPOINTER_INFO *)((char *)&v29[6 * v19 + 1] + 8),
          (const struct TouchContact *)(v20 + 24),
          v19 == 0,
          (struct tagLegacyISMPOSTINPUTINFO *)v29);
        v19 = ++LODWORD(v29[0]);
        if ( v22 )
        {
          v23 = MITInjectLegacyISMTouchFrame(v29);
          v5 = v23 | 0x10000000;
          if ( v23 < 0 )
          {
            v19 = v29[0];
          }
          else
          {
            memset(v29, 0, 0x3D8uLL);
            DWORD1(v29[0]) = *(_DWORD *)(a2 + 4);
            *((LARGE_INTEGER *)&v29[0] + 1) = PerformanceCount;
            *(_WORD *)(v20 + 26) = 4;
            LegacyInjectionRawInputProvider::FillPointerInfo(
              (LegacyInjectionRawInputProvider *)(96LL * LODWORD(v29[0])),
              (struct tagPOINTER_INFO *)((char *)&v29[6 * LODWORD(v29[0]) + 1] + 8),
              (const struct TouchContact *)(v20 + 24),
              LODWORD(v29[0]) == 0,
              (struct tagLegacyISMPOSTINPUTINFO *)v29);
            v19 = ++LODWORD(v29[0]);
          }
          *(_WORD *)(v20 + 26) = v21;
          if ( (v5 & 0x80000000) != 0 )
            break;
        }
        if ( ++v18 >= *(unsigned __int8 *)(a2 + 23) )
          goto LABEL_33;
      }
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      {
LABEL_37:
        if ( IsDebuggerPresent() )
          __debugbreak();
        __fastfail(7u);
      }
      v26 = 697;
    }
    else
    {
LABEL_33:
      v25 = MITInjectLegacyISMTouchFrame(v29);
      v5 = v25 | 0x10000000;
      if ( v25 >= 0 )
        return v5;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_37;
      v26 = 705;
    }
    Template_qqq(v24, &MinInput_Warning_CheckResult, 0, v26, v5);
    goto LABEL_37;
  }
  memset(v29, 0, sizeof(v29));
  v8 = *(_DWORD **)(a1 + 80);
  DWORD1(v29[0]) = *v8;
  LODWORD(v29[0]) = v8[1];
  DWORD2(v29[0]) = *(_DWORD *)(a2 + 4);
  *(LARGE_INTEGER *)&v29[1] = PerformanceCount;
  v9 = *(unsigned __int8 *)(a2 + 23);
  DWORD2(v29[2]) = 1888;
  if ( v9 )
  {
    v10 = (int *)&v29[3] + 2;
    v11 = a2 + 26;
    v12 = v9;
    do
    {
      v13 = (*(_BYTE *)v11 & 8) == 0;
      *(v10 - 1) = *(unsigned __int16 *)(v11 - 2);
      v10[2] = *(__int16 *)(v11 + 2);
      v10[3] = *(__int16 *)(v11 + 4);
      v14 = 0;
      *v10 = 0;
      if ( !v13 )
      {
        v14 = 1;
        *v10 = 1;
      }
      if ( (*(_BYTE *)v11 & 3) != 0 )
      {
        v14 |= 2u;
        *v10 = v14;
      }
      if ( (*(_WORD *)v11 & 0x2000) != 0 )
        *v10 = v14 | 4;
      v15 = BYTE8(v29[43]);
      if ( *(__int16 *)v11 < 0 )
        v15 = 1;
      ++LODWORD(v29[3]);
      v10 += 12;
      BYTE8(v29[43]) = v15;
      v11 += 56LL;
      --v12;
    }
    while ( v12 );
  }
  v16 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *))(**(_QWORD **)(a1 + 40) + 24LL))(*(_QWORD *)(a1 + 40), v29);
  v5 = v16;
  if ( v16 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v17, &MinInput_Warning_CheckResult, 0, 656, v16);
    goto LABEL_37;
  }
  return v5;
}
