/*
 * XREFs of ?GetInstructionForLivePreview@CTopLevelAtlasedRectsVisual@@QEAAJ_NPEAPEAVCDrawAtlasedRectsInstruction@@@Z @ 0x18007D574
 * Callers:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x18000F4D8 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CDrawAtlasedRectsInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18001244C (-Create@CDrawAtlasedRectsInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18001D0D0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?BeginCommand@CResource@@QEAAJPEAXII@Z @ 0x18001D2AC (-BeginCommand@CResource@@QEAAJPEAXII@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

__int64 __fastcall CTopLevelAtlasedRectsVisual::GetInstructionForLivePreview(
        CTopLevelAtlasedRectsVisual *this,
        char a2,
        struct CDrawAtlasedRectsInstruction **a3)
{
  __int64 v4; // rax
  int v7; // eax
  struct MIL_CHANNEL__ **v8; // rbp
  unsigned int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rax
  struct CResource *v14; // r15
  __int64 v15; // rdi
  bool v16; // dl
  __int64 v17; // r10
  int v18; // ecx
  int v19; // eax
  unsigned int v20; // esi
  _DWORD *v21; // r14
  int appended; // eax
  int v23; // eax
  int v24; // eax
  CResource *v26; // [rsp+30h] [rbp-B8h] BYREF
  int v27; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+3Ch] [rbp-ACh]
  _DWORD v29[24]; // [rsp+50h] [rbp-98h] BYREF

  v26 = 0LL;
  v28 = 0LL;
  v4 = *((_QWORD *)this + 2);
  v27 = 223;
  v7 = CResource::Create(6u, *(_QWORD *)(v4 + 16), &v26);
  v8 = (struct MIL_CHANNEL__ **)v26;
  v9 = v7;
  if ( v7 >= 0 )
  {
    v10 = *((unsigned int *)this + 72);
    v11 = (unsigned int)(v10 - 1);
    if ( (int)v11 >= 0 )
    {
      v12 = *((_QWORD *)this + 33);
      while ( 1 )
      {
        v13 = *(_QWORD *)(*(_QWORD *)(v12 + 8 * v11) + 72LL);
        v14 = v13 ? *(struct CResource **)(v13 + 16) : 0LL;
        if ( v14 )
          break;
        v11 = (unsigned int)(v11 - 1);
        if ( (int)v11 < 0 )
          goto LABEL_33;
      }
      v15 = 0LL;
      v16 = a2 && *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 16);
      if ( (_DWORD)v10 )
      {
        v17 = v10;
        do
        {
          v18 = *(_DWORD *)(*(_QWORD *)v12 + 132LL);
          if ( (unsigned int)(v18 - 9) <= 8 || v16 && (unsigned int)(v18 - 18) <= 3 )
          {
            v29[v15] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v12 + 88LL) + 24LL);
            v15 = (unsigned int)(v15 + 1);
          }
          v12 += 8LL;
          --v17;
        }
        while ( v17 );
      }
      HIDWORD(v28) = 4 * v15;
      v19 = CResource::BeginCommand((CResource *)v8, &v27, 0xCu, 4 * (int)v15);
      v9 = v19;
      if ( v19 >= 0 )
      {
        v20 = 0;
        if ( (_DWORD)v15 )
        {
          v21 = v29;
          while ( 1 )
          {
            LODWORD(v26) = *v21;
            appended = MilChannel_AppendCommandData(v8[2], &v26, 4u);
            v9 = appended;
            if ( appended < 0 )
              break;
            ++v20;
            ++v21;
            if ( v20 >= (unsigned int)v15 )
              goto LABEL_28;
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, appended, 0xBDu);
        }
        else
        {
LABEL_28:
          v23 = MilChannel_EndCommand(v8[2]);
          v9 = v23;
          if ( v23 >= 0 )
          {
            v24 = CDrawAtlasedRectsInstruction::Create((struct CResource *)v8, v14, a3);
            v9 = v24;
            if ( v24 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v24, 0xC2u);
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v23, 0xC0u);
          }
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v19, 0xB8u);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x98u);
  }
LABEL_33:
  if ( v8 )
    CBaseObject::Release((CBaseObject *)v8);
  return v9;
}
