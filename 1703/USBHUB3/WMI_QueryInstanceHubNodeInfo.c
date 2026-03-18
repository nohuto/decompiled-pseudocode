/*
 * XREFs of WMI_QueryInstanceHubNodeInfo @ 0x1C00744B0
 * Callers:
 *     <none>
 * Callees:
 *     HUBFDO_BuildUsb20HubDescriptor @ 0x1C000B828 (HUBFDO_BuildUsb20HubDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038540 (memset.c)
 */

__int64 __fastcall WMI_QueryInstanceHubNodeInfo(__int64 a1, unsigned int a2, _DWORD *a3, unsigned int *a4)
{
  unsigned int *v4; // rbx
  size_t v5; // rbp
  unsigned int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rsi
  int v10; // r13d
  unsigned __int16 v11; // r15
  unsigned int v12; // r12d
  unsigned __int16 v13; // bp
  __int64 *v14; // r13
  _DWORD *v15; // r14
  unsigned __int16 v16; // r12
  __int64 i; // rbx
  __int64 v18; // rbx
  __int64 j; // r8
  __int64 v21; // rax
  __int64 v22; // r15
  unsigned int v23; // [rsp+30h] [rbp-48h]

  v4 = a4;
  v5 = a2;
  v7 = 0;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3008))(WdfDriverGlobals, a1);
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v8,
         off_1C005B0C0);
  v10 = *(unsigned __int16 *)(v9 + 48);
  v11 = v10;
  v12 = 16 * v10 + 1186;
  v23 = v12;
  if ( v12 <= (unsigned int)v5 )
  {
    memset(a3, 0, v5);
    *a3 = 1431519822;
    a3[1] = v12;
    a3[22] = 1;
    *(_OWORD *)(a3 + 23) = *(_OWORD *)(v9 + 296);
    *(_OWORD *)(a3 + 27) = *(_OWORD *)(v9 + 312);
    HUBFDO_BuildUsb20HubDescriptor(v9, a3 + 31);
    *(_DWORD *)((char *)a3 + 195) = *(_DWORD *)(v9 + 96);
    *(_DWORD *)((char *)a3 + 207) = v10;
    if ( !*(_BYTE *)(v9 + 232) )
      *((_BYTE *)a3 + 202) = 1;
    v13 = 0;
    *((_BYTE *)a3 + 201) = *(_DWORD *)(v9 + 92) != 100;
    if ( (_WORD)v10 )
    {
      v14 = (__int64 *)(v9 + 2328);
      v15 = (_DWORD *)((char *)a3 + 223);
      v16 = v11;
      do
      {
        *(v15 - 1) = v13;
        *((_WORD *)v15 - 4) = v13;
        for ( i = *v14; ; i = *(_QWORD *)(v18 + 248) )
        {
          v18 = i - 248;
          if ( v14 == (__int64 *)(v18 + 248) )
            goto LABEL_11;
          if ( *(_WORD *)(v18 + 200) == v13 )
            break;
        }
        if ( !v18 )
        {
LABEL_11:
          *v15 = 0;
          goto LABEL_12;
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(
          WdfDriverGlobals,
          *(_QWORD *)(v9 + 16));
        for ( j = 0LL; ; j = v22 )
        {
          v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1080))(
                  WdfDriverGlobals,
                  *(_QWORD *)(v9 + 16),
                  j,
                  1LL);
          v22 = v21;
          if ( !v21
            || *(_WORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                            WdfDriverGlobals,
                            v21,
                            off_1C005B070)
                        + 48) == v13 )
          {
            break;
          }
        }
        *v15 = *(_DWORD *)(v18 + 1424);
        if ( v22 )
          *((_WORD *)v15 - 3) = *(_WORD *)(*(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                                                         WdfDriverGlobals,
                                                         v22,
                                                         off_1C005B070)
                                                     + 24)
                                         + 1632LL);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(
          WdfDriverGlobals,
          *(_QWORD *)(v9 + 16));
LABEL_12:
        ++v13;
        v15 += 4;
      }
      while ( v13 < v16 );
      v12 = v23;
      v4 = a4;
    }
  }
  else
  {
    v7 = -1073741789;
  }
  *v4 = v12;
  return v7;
}
