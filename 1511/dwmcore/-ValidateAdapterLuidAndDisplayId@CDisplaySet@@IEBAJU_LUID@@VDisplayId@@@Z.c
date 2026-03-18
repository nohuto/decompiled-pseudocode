/*
 * XREFs of ?ValidateAdapterLuidAndDisplayId@CDisplaySet@@IEBAJU_LUID@@VDisplayId@@@Z @ 0x18006FF48
 * Callers:
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x1800724C8 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 * Callees:
 *     ?IsSpecific@DisplayId@@QEBA_NXZ @ 0x180070DC8 (-IsSpecific@DisplayId@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDisplaySet::ValidateAdapterLuidAndDisplayId(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // ebx
  int v5; // edx
  int v6; // r8d
  __int64 v7; // r9
  unsigned int v8; // r10d
  unsigned int v9; // r11d
  unsigned int v10; // esi
  __int64 v11; // rdi
  __int64 v12; // r8
  int v14; // r9d
  __int64 v15; // rcx
  unsigned int v16; // r8d
  __int64 v17; // rcx
  unsigned int v18; // [rsp+20h] [rbp-18h]
  int v19; // [rsp+4Ch] [rbp+14h]
  int v20; // [rsp+50h] [rbp+18h] BYREF

  v20 = a3;
  v19 = HIDWORD(a2);
  v4 = 0;
  if ( a3 == DisplayId::Invalid )
  {
    v18 = 649;
    v4 = -2147024809;
    goto LABEL_12;
  }
  if ( DisplayId::IsSpecific((DisplayId *)&v20) )
  {
    v8 = *(_DWORD *)(a1 + 72);
    v9 = v7;
    v10 = v8;
    if ( v8 )
    {
      while ( v6 != *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL * v9) + 244LL) )
      {
        if ( ++v9 >= v8 )
          goto LABEL_6;
      }
      v10 = v9;
    }
LABEL_6:
    if ( v10 < v8 )
    {
      v11 = *(_QWORD *)(a1 + 48);
      v4 = v7;
      v12 = *(_QWORD *)(v11 + 8LL * v10);
      if ( *(_DWORD *)(v12 + 232) == v5 && *(_DWORD *)(v12 + 236) == v19 )
        return v4;
      if ( v8 )
      {
        do
        {
          if ( (_DWORD)v7 != v10 )
          {
            v15 = *(_QWORD *)(v11 + 8 * v7);
            if ( *(_QWORD *)(v15 + 136) == v12 && *(_DWORD *)(v15 + 232) == v5 && *(_DWORD *)(v15 + 236) == v19 )
              return v4;
          }
          v7 = (unsigned int)(v7 + 1);
        }
        while ( (unsigned int)v7 < v8 );
      }
      v4 = -2003304442;
      v18 = 681;
      goto LABEL_27;
    }
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x26Fu);
    v18 = 656;
LABEL_12:
    v14 = -2147024809;
LABEL_28:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, v18);
    return v4;
  }
  v16 = *(_DWORD *)(a1 + 72);
  if ( !v16 )
  {
LABEL_26:
    v4 = -2003304290;
    v18 = 707;
LABEL_27:
    v14 = v4;
    goto LABEL_28;
  }
  while ( 1 )
  {
    v17 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8 * v7);
    if ( *(_DWORD *)(v17 + 232) == v5 && *(_DWORD *)(v17 + 236) == v19 )
      return v4;
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= v16 )
      goto LABEL_26;
  }
}
