/*
 * XREFs of ?ValidateAdapterLuidAndDisplayId@CDisplaySet@@IEBAJU_LUID@@VDisplayId@@@Z @ 0x180055208
 * Callers:
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x180056088 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 * Callees:
 *     ?IsSpecific@DisplayId@@QEBA_NXZ @ 0x180056350 (-IsSpecific@DisplayId@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDisplaySet::ValidateAdapterLuidAndDisplayId(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  int v4; // r9d
  int v5; // edx
  int v6; // r8d
  __int64 v7; // r9
  __int64 v8; // r10
  unsigned int v9; // edi
  char v10; // bp
  unsigned int v11; // esi
  unsigned int v12; // r11d
  __int64 v13; // r14
  _DWORD *v14; // r10
  unsigned int v15; // r8d
  __int64 v16; // rcx
  unsigned int v17; // r8d
  _DWORD *v18; // rcx
  unsigned int v20; // [rsp+20h] [rbp-28h]
  int v21; // [rsp+5Ch] [rbp+14h]
  int v22; // [rsp+60h] [rbp+18h] BYREF

  v22 = a3;
  v21 = HIDWORD(a2);
  v3 = 0;
  if ( a3 == DisplayId::Invalid )
  {
    v20 = 648;
    v3 = -2147024809;
LABEL_3:
    v4 = -2147024809;
LABEL_36:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, v20);
    return v3;
  }
  if ( DisplayId::IsSpecific((DisplayId *)&v22) )
  {
    v9 = *(_DWORD *)(v8 + 72);
    v10 = v7;
    v11 = v9;
    v12 = v7;
    if ( v9 )
    {
      while ( v6 != *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 48) + 8LL * v12) + 852LL) )
      {
        if ( ++v12 >= v9 )
          goto LABEL_10;
      }
      v11 = v12;
    }
LABEL_10:
    if ( v11 >= v9 )
    {
      v3 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x26Eu);
      v20 = 655;
      goto LABEL_3;
    }
    v13 = *(_QWORD *)(v8 + 48);
    v3 = v7;
    v14 = *(_DWORD **)(v13 + 8LL * v11);
    if ( (v14[210] != v5 || v14[211] != v21) && (v14[208] != v5 || v14[209] != v21) )
    {
      v15 = v7;
      if ( v9 )
      {
        while ( !v10 )
        {
          if ( v15 != v11 )
          {
            v16 = *(_QWORD *)(v13 + 8LL * v15);
            if ( *(_DWORD **)(v16 + 152) == v14
              && (*(_DWORD *)(v16 + 840) == v5 && *(_DWORD *)(v16 + 844) == v21
               || *(_DWORD *)(v16 + 832) == v5 && *(_DWORD *)(v16 + 836) == v21) )
            {
              v10 = 1;
            }
          }
          if ( ++v15 >= v9 )
          {
            if ( v10 )
              return v3;
            goto LABEL_27;
          }
        }
        return v3;
      }
LABEL_27:
      v3 = -2003304442;
      v20 = 684;
LABEL_35:
      v4 = v3;
      goto LABEL_36;
    }
  }
  else
  {
    v17 = *(_DWORD *)(v8 + 72);
    if ( !v17 )
    {
LABEL_34:
      v3 = -2003304290;
      v20 = 711;
      goto LABEL_35;
    }
    while ( 1 )
    {
      v18 = *(_DWORD **)(*(_QWORD *)(v8 + 48) + 8 * v7);
      if ( v18[210] == v5 && v18[211] == v21 )
        break;
      if ( v18[208] == v5 && v18[209] == v21 )
        break;
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= v17 )
        goto LABEL_34;
    }
  }
  return v3;
}
