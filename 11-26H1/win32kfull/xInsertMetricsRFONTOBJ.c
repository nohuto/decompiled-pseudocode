/*
 * XREFs of xInsertMetricsRFONTOBJ @ 0x1400C21D8
 * Callers:
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVXDCOBJ@@_NPEAVESTROBJ@@@Z @ 0x1400C015C (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVXDCOBJ@@_NPEAVESTROBJ@@@Z.c)
 *     ?bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1400C2180 (-bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 * Callees:
 *     ?bCheckMetricsCache@RFONTOBJ@@QEAAHXZ @ 0x1400C2500 (-bCheckMetricsCache@RFONTOBJ@@QEAAHXZ.c)
 *     EngUnmapFontFileFD @ 0x1400C2BE0 (EngUnmapFontFileFD.c)
 *     EngMapFontFileFDInternal @ 0x1400D09E8 (EngMapFontFileFDInternal.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1400FBC50 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?ResetFontFileView@@YAXPEAPEAUFONTFILEVIEW@@KPEAPEAXPEAK@Z @ 0x140326D64 (-ResetFontFileView@@YAXPEAPEAUFONTFILEVIEW@@KPEAPEAXPEAK@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall xInsertMetricsRFONTOBJ(RFONTOBJ *this, _QWORD *a2, unsigned __int16 a3)
{
  __int64 v3; // rax
  unsigned int v5; // r15d
  _QWORD *v6; // r12
  __int64 v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int128 *v12; // rcx
  __int64 v13; // r13
  ULONG_PTR *v14; // rdi
  __int64 v15; // rax
  int (__fastcall *v16)(__int64, __int64, _QWORD, _QWORD, __int128 *, _QWORD, _DWORD); // rbx
  unsigned int v17; // r12d
  unsigned int i; // ecx
  struct FONTFILEVIEW **v19; // r10
  struct FONTFILEVIEW *v20; // rdx
  unsigned int v21; // r12d
  __int64 v22; // rbx
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // [rsp+40h] [rbp-89h] BYREF
  unsigned __int16 v28[4]; // [rsp+48h] [rbp-81h] BYREF
  _QWORD *v29; // [rsp+50h] [rbp-79h]
  unsigned int v30; // [rsp+58h] [rbp-71h]
  struct FONTFILEVIEW **v31; // [rsp+60h] [rbp-69h]
  __int128 *v32; // [rsp+68h] [rbp-61h]
  __int64 v33; // [rsp+70h] [rbp-59h]
  __int64 v34; // [rsp+78h] [rbp-51h]
  __int128 v35; // [rsp+80h] [rbp-49h] BYREF
  __int64 v36; // [rsp+90h] [rbp-39h]
  unsigned int v37[2]; // [rsp+C0h] [rbp-9h] BYREF
  int v38; // [rsp+C8h] [rbp-1h]
  void *v39[2]; // [rsp+D0h] [rbp+7h] BYREF
  __int64 v40; // [rsp+E0h] [rbp+17h]

  v3 = *(_QWORD *)this;
  v5 = 0;
  v29 = a2;
  v6 = a2;
  v7 = *(_QWORD *)(v3 + 480);
  if ( (*(_DWORD *)(v3 + 84) & 2) != 0 )
  {
    v28[0] = a3;
    v27 = 0;
    RFONTOBJ::vXlatGlyphArray(this, v28, 1u, &v27, 0, 0);
    v8 = v27;
  }
  else
  {
    v8 = a3;
  }
  v9 = *(_QWORD *)this;
  v27 = v8;
  if ( v8 != *(_DWORD *)(v9 + 456) || (v26 = *(_QWORD *)(v7 + 8)) == 0 )
  {
    if ( (unsigned int)RFONTOBJ::bCheckMetricsCache(this) )
    {
      v10 = *(_QWORD *)this;
      v33 = v10;
      v30 = (*(_DWORD *)(v10 + 88) == 2) + 1;
      memset_0(&v35, 0, 0x40uLL);
      v13 = *(_QWORD *)(v10 + 128);
      if ( *(_DWORD *)(v10 + 648) )
      {
        v12 = &v35;
        v32 = &v35;
      }
      else
      {
        v32 = *(__int128 **)(v9 + 512);
      }
      v14 = 0LL;
      v34 = *(_QWORD *)(v10 + 112);
      v15 = *(_QWORD *)(v13 + 96);
      v16 = *(int (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int128 *, _QWORD, _DWORD))(v15 + 2904);
      if ( (*(_DWORD *)(v15 + 40) & 0x2000) != 0 )
      {
        v17 = *(_DWORD *)(v13 + 36);
        *(_DWORD *)v28 = v17;
        if ( v17 <= 3 )
        {
          if ( (*(_DWORD *)(v13 + 52) & 0x1000) != 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11);
          if ( (*(_DWORD *)(v13 + 52) & 0x2000) != 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11);
          for ( i = 0; i < v17; ++i )
          {
            v19 = *(struct FONTFILEVIEW ***)(v13 + 208);
            v31 = v19;
            v20 = v19[i];
            if ( !*((_BYTE *)v20 + 45) && *((_BYTE *)v20 + 44) && !*((_QWORD *)v20 + 6) )
            {
              *(_OWORD *)v39 = 0LL;
              v40 = 0LL;
              v21 = 0;
              *(_QWORD *)v37 = 0LL;
              v38 = 0;
              while ( 1 )
              {
                if ( v21 >= *(_DWORD *)v28 )
                {
                  v14 = *(ULONG_PTR **)(v13 + 208);
                  v5 = *(_DWORD *)v28;
                  goto LABEL_21;
                }
                if ( !(unsigned int)EngMapFontFileFDInternal(v19[v21]) )
                  break;
                v19 = v31;
                ++v21;
              }
              ResetFontFileView(v31, v21, v39, v37);
              break;
            }
          }
        }
LABEL_21:
        v6 = v29;
      }
      if ( v16(v34, v33, v30, v27, v32, 0LL, 0) >= 0 )
      {
        if ( v5 )
        {
          v24 = v5;
          do
          {
            EngUnmapFontFileFD(*v14++);
            --v24;
          }
          while ( v24 );
        }
        if ( *(_DWORD *)(*(_QWORD *)this + 648LL) )
        {
          v25 = *(_QWORD *)(v9 + 512);
          *(_OWORD *)v25 = v35;
          *(_QWORD *)(v25 + 16) = v36;
        }
        **(_QWORD **)(v9 + 512) = 0LL;
        *v6 = *(_QWORD *)(v9 + 512);
        *(_QWORD *)(v9 + 512) += (-(__int64)(*(_DWORD *)(*(_QWORD *)this + 648LL) != 0) & 0xFFFFFFFFFFFFFFD8uLL) + 64;
        return 1LL;
      }
      if ( v5 )
      {
        v22 = v5;
        do
        {
          EngUnmapFontFileFD(*v14++);
          --v22;
        }
        while ( v22 );
      }
    }
    return 0LL;
  }
  *v6 = v26;
  return 1LL;
}
