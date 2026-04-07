/*
 * XREFs of ?GetInstructionForLivePreview@CTopLevelAtlasedRectsVisual@@QEAAJ_NPEAPEAVCDrawAtlasedRectsInstruction@@@Z @ 0x18007E14C
 * Callers:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x180020E2C (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 * Callees:
 *     ?Create@CDrawAtlasedRectsInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x180008230 (-Create@CDrawAtlasedRectsInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180019EE0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelAtlasedRectsVisual::GetInstructionForLivePreview(
        CTopLevelAtlasedRectsVisual *this,
        char a2,
        struct CDrawAtlasedRectsInstruction **a3)
{
  __int64 v3; // rax
  int v7; // eax
  struct CResource *v8; // rsi
  unsigned int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rax
  struct CResource *v14; // rdi
  __int64 v15; // r11
  bool v16; // dl
  __int64 v17; // r10
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  struct CResource *v22; // [rsp+30h] [rbp-98h] BYREF
  _DWORD v23[24]; // [rsp+40h] [rbp-88h] BYREF

  v3 = *((_QWORD *)this + 2);
  v22 = 0LL;
  v7 = CResource::Create(2u, *(_QWORD *)(v3 + 16), &v22);
  v8 = v22;
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
          goto LABEL_26;
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
            v23[v15] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v12 + 88LL) + 24LL);
            v15 = (unsigned int)(v15 + 1);
          }
          v12 += 8LL;
          --v17;
        }
        while ( v17 );
      }
      v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *, _QWORD))(**((_QWORD **)v8 + 2) + 1048LL))(
              *((_QWORD *)v8 + 2),
              *((unsigned int *)v8 + 6),
              v23,
              (unsigned int)v15);
      v9 = v19;
      if ( v19 >= 0 )
      {
        v20 = CDrawAtlasedRectsInstruction::Create(v8, v14, a3);
        v9 = v20;
        if ( v20 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v20, 0xA9u);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v19, 0xA7u);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x85u);
  }
LABEL_26:
  if ( v8 )
    CBaseObject::Release(v8);
  return v9;
}
