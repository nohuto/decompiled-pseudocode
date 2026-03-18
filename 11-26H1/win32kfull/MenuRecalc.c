/*
 * XREFs of MenuRecalc @ 0x14023D0D0
 * Callers:
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x14023CE68 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 */

_QWORD *MenuRecalc()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 *v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // edi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 i; // rcx
  _BYTE *v11; // rbx
  __int64 v13; // rdx
  unsigned int v14; // r8d
  __int64 v15; // rax
  __int64 v16[5]; // [rsp+20h] [rbp-28h] BYREF

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v16);
  v2 = *(__int64 **)(W32GetUserSessionState(v1, v0) + 19864);
  v5 = 0;
  v6 = *(_QWORD *)(W32GetUserSessionState(v4, v3) + 19920);
  W32GetUserSessionState(v8, v7);
  v11 = (_BYTE *)(v6 + 24);
  do
  {
    if ( *v11 == 2 )
    {
      v13 = *v2;
      v16[2] = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=((__int64)v16, v13);
      v14 = 0;
      *(_DWORD *)(*(_QWORD *)v16[0] + 64LL) = 0;
      *(_DWORD *)(*(_QWORD *)v16[0] + 68LL) = 0;
      for ( i = *(_QWORD *)v16[0]; v14 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v16[0] + 40LL) + 44LL); i = *(_QWORD *)v16[0] )
      {
        v15 = (int)v14++;
        v9 = 96 * v15;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v16[0] + 88LL) + v9) + 84LL) = 0x7FFFFFFF;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v16[0] + 88LL) + v9) + 88LL) = 0;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v16[0] + 88LL) + v9) + 104LL) = -1;
      }
    }
    ++v5;
    v11 += 32;
    v2 += 5;
  }
  while ( v5 <= *(_DWORD *)(W32GetUserSessionState(i, v9) + 19848) );
  return SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v16);
}
