/*
 * XREFs of ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@HPEAPEAX@Z @ 0x1C004BCA8
 * Callers:
 *     ?RedirectMouseWheelToHwnd@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEAUHWND__@@_N@Z @ 0x1C0004E10 (-RedirectMouseWheelToHwnd@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEA.c)
 *     ?_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z @ 0x1C004BA6C (-_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z.c)
 * Callees:
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C001F5D0 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     UserIsCurrentProcessDwm @ 0x1C004D740 (UserIsCurrentProcessDwm.c)
 *     ?Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVICompositionObject@@@Z3PEAPEAX@Z @ 0x1C0071FC8 (-Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEA.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 */

__int64 __fastcall CompositionInputObject::KernelCreateCompositionInputSink(
        const struct COMPOSITION_INPUT_SINK_V2 *a1,
        unsigned __int8 a2,
        void **a3)
{
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  int v5; // ebx
  __int128 v7; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm0
  char *v14; // rcx
  __int64 v15; // rax
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  int v22; // ecx
  unsigned int v23; // esi
  int v24; // eax
  __int64 v25; // rdi
  __int64 v26; // r9
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+58h] [rbp-A8h] BYREF
  int v30; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v31; // [rsp+68h] [rbp-98h]
  __int64 v32; // [rsp+70h] [rbp-90h]
  int v33; // [rsp+78h] [rbp-88h]
  __int64 v34; // [rsp+80h] [rbp-80h]
  __int64 v35; // [rsp+88h] [rbp-78h]
  __int128 v36; // [rsp+90h] [rbp-70h]
  __int128 v37; // [rsp+A0h] [rbp-60h]
  __int128 v38; // [rsp+B0h] [rbp-50h]
  __int128 v39; // [rsp+C0h] [rbp-40h]
  __int128 v40; // [rsp+D0h] [rbp-30h]
  __int128 v41; // [rsp+E0h] [rbp-20h]
  __int128 v42; // [rsp+F0h] [rbp-10h]
  __int128 v43; // [rsp+100h] [rbp+0h]
  __int128 v44; // [rsp+110h] [rbp+10h]
  __int128 v45; // [rsp+120h] [rbp+20h]
  __int128 v46; // [rsp+130h] [rbp+30h]
  __int128 v47; // [rsp+140h] [rbp+40h]
  __int128 v48; // [rsp+150h] [rbp+50h]
  __int128 v49; // [rsp+160h] [rbp+60h]
  __int128 v50; // [rsp+170h] [rbp+70h]
  __int64 v51; // [rsp+180h] [rbp+80h]
  _OWORD v52[15]; // [rsp+190h] [rbp+90h] BYREF
  __int64 v53; // [rsp+280h] [rbp+180h]
  int v54; // [rsp+288h] [rbp+188h]

  v3 = *(_OWORD *)a1;
  Handle = (HANDLE)-1LL;
  v4 = *((_OWORD *)a1 + 1);
  v29 = 0LL;
  v36 = v3;
  v5 = 0;
  v7 = *((_OWORD *)a1 + 2);
  v37 = v4;
  v9 = *((_OWORD *)a1 + 3);
  v38 = v7;
  v10 = *((_OWORD *)a1 + 4);
  v39 = v9;
  v11 = *((_OWORD *)a1 + 5);
  v40 = v10;
  v12 = *((_OWORD *)a1 + 6);
  v41 = v11;
  v42 = v12;
  v13 = *((_OWORD *)a1 + 7);
  v14 = (char *)a1 + 128;
  v43 = v13;
  v15 = *((_QWORD *)v14 + 14);
  v16 = *((_OWORD *)v14 + 1);
  v44 = *(_OWORD *)v14;
  v17 = *((_OWORD *)v14 + 2);
  v45 = v16;
  v18 = *((_OWORD *)v14 + 3);
  v46 = v17;
  v19 = *((_OWORD *)v14 + 4);
  v47 = v18;
  v20 = *((_OWORD *)v14 + 5);
  v48 = v19;
  v21 = *((_OWORD *)v14 + 6);
  v49 = v20;
  v50 = v21;
  v51 = v15;
  if ( (_DWORD)v36 != 200 && ((_DWORD)v36 != 248 || DWORD2(v48) > 4)
    || DWORD2(v36) > 4
    || DWORD2(v39) > 4
    || DWORD2(v42) > 4
    || DWORD2(v45) > 4 )
  {
    v5 = -1073741811;
  }
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    v22 = 0;
    v23 = 3;
  }
  else
  {
    v22 = -1073741824;
    v23 = -1073741824;
  }
  if ( v5 < 0 )
    goto LABEL_20;
  v24 = UserAllocDefaultCompositionSecurityDescriptor(v22, &v29);
  v25 = v29;
  v5 = v24;
  if ( v24 >= 0 )
  {
    v31 = 0LL;
    v33 = 0;
    v32 = 0LL;
    v35 = 0LL;
    v30 = 48;
    v34 = v29;
    KeEnterCriticalRegion();
    LOBYTE(v26) = 1;
    v52[0] = v36;
    v52[1] = v37;
    v52[2] = v38;
    v52[3] = v39;
    v52[4] = v40;
    v52[5] = v41;
    v52[6] = v42;
    v52[7] = v43;
    v52[8] = v44;
    v52[9] = v45;
    v52[10] = v46;
    v52[11] = v47;
    v52[12] = v48;
    v52[13] = v49;
    v52[14] = v50;
    v53 = v51;
    v54 ^= (a2 ^ (unsigned __int8)v54) & 1;
    v5 = CompositionObject::Create(0LL, &v30, v23, v26, 3, 200, CompositionInputObject::ObjectInit, v52, &Handle);
    KeLeaveCriticalRegion();
    if ( v5 >= 0 )
      *a3 = Handle;
  }
  if ( v25 )
    Win32FreePool();
  if ( v5 < 0 )
  {
LABEL_20:
    if ( Handle != (HANDLE)-1LL )
      NtClose(Handle);
  }
  return (unsigned int)v5;
}
