/*
 * XREFs of ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@HPEAPEAX@Z @ 0x1C0049538
 * Callers:
 *     ?RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1C00031C8 (-RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND.c)
 *     ?_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z @ 0x1C0049300 (-_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C003A440 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     ?Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVICompositionObject@@@Z3PEAPEAX@Z @ 0x1C00483A4 (-Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEA.c)
 *     UserIsCurrentProcessDwm @ 0x1C004B5A0 (UserIsCurrentProcessDwm.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
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
  ACCESS_MASK v23; // esi
  int v24; // eax
  __int64 v25; // rdi
  __int64 v26; // r9
  __int64 v28; // [rsp+28h] [rbp-D8h]
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+58h] [rbp-A8h] BYREF
  int v31; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+68h] [rbp-98h]
  __int64 v33; // [rsp+70h] [rbp-90h]
  int v34; // [rsp+78h] [rbp-88h]
  __int64 v35; // [rsp+80h] [rbp-80h]
  __int64 v36; // [rsp+88h] [rbp-78h]
  __int128 v37; // [rsp+90h] [rbp-70h]
  __int128 v38; // [rsp+A0h] [rbp-60h]
  __int128 v39; // [rsp+B0h] [rbp-50h]
  __int128 v40; // [rsp+C0h] [rbp-40h]
  __int128 v41; // [rsp+D0h] [rbp-30h]
  __int128 v42; // [rsp+E0h] [rbp-20h]
  __int128 v43; // [rsp+F0h] [rbp-10h]
  __int128 v44; // [rsp+100h] [rbp+0h]
  __int128 v45; // [rsp+110h] [rbp+10h]
  __int128 v46; // [rsp+120h] [rbp+20h]
  __int128 v47; // [rsp+130h] [rbp+30h]
  __int128 v48; // [rsp+140h] [rbp+40h]
  __int128 v49; // [rsp+150h] [rbp+50h]
  __int128 v50; // [rsp+160h] [rbp+60h]
  __int128 v51; // [rsp+170h] [rbp+70h]
  __int64 v52; // [rsp+180h] [rbp+80h]
  _OWORD v53[15]; // [rsp+190h] [rbp+90h] BYREF
  __int64 v54; // [rsp+280h] [rbp+180h]
  int v55; // [rsp+288h] [rbp+188h]

  v3 = *(_OWORD *)a1;
  Handle = (HANDLE)-1LL;
  v4 = *((_OWORD *)a1 + 1);
  v30 = 0LL;
  v37 = v3;
  v5 = 0;
  v7 = *((_OWORD *)a1 + 2);
  v38 = v4;
  v9 = *((_OWORD *)a1 + 3);
  v39 = v7;
  v10 = *((_OWORD *)a1 + 4);
  v40 = v9;
  v11 = *((_OWORD *)a1 + 5);
  v41 = v10;
  v12 = *((_OWORD *)a1 + 6);
  v42 = v11;
  v43 = v12;
  v13 = *((_OWORD *)a1 + 7);
  v14 = (char *)a1 + 128;
  v44 = v13;
  v15 = *((_QWORD *)v14 + 14);
  v16 = *((_OWORD *)v14 + 1);
  v45 = *(_OWORD *)v14;
  v17 = *((_OWORD *)v14 + 2);
  v46 = v16;
  v18 = *((_OWORD *)v14 + 3);
  v47 = v17;
  v19 = *((_OWORD *)v14 + 4);
  v48 = v18;
  v20 = *((_OWORD *)v14 + 5);
  v49 = v19;
  v21 = *((_OWORD *)v14 + 6);
  v50 = v20;
  v51 = v21;
  v52 = v15;
  if ( (_DWORD)v37 != 200 && ((_DWORD)v37 != 248 || DWORD2(v49) > 4)
    || DWORD2(v37) > 4
    || DWORD2(v40) > 4
    || DWORD2(v43) > 4
    || DWORD2(v46) > 4 )
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
  v24 = UserAllocDefaultCompositionSecurityDescriptor(v22, &v30);
  v25 = v30;
  v5 = v24;
  if ( v24 >= 0 )
  {
    v32 = 0LL;
    v34 = 0;
    v33 = 0LL;
    v36 = 0LL;
    v31 = 48;
    v35 = v30;
    KeEnterCriticalRegion();
    LOBYTE(v26) = 1;
    v53[0] = v37;
    v53[1] = v38;
    v53[2] = v39;
    v53[3] = v40;
    v53[4] = v41;
    v53[5] = v42;
    v53[6] = v43;
    v53[7] = v44;
    v53[8] = v45;
    v53[9] = v46;
    v53[10] = v47;
    v53[11] = v48;
    v53[12] = v49;
    v53[13] = v50;
    v53[14] = v51;
    v54 = v52;
    v55 ^= (a2 ^ (unsigned __int8)v55) & 1;
    LODWORD(v28) = 200;
    v5 = CompositionObject::Create(
           0LL,
           (__int64)&v31,
           v23,
           v26,
           3,
           v28,
           (__int64 (__fastcall *)(_QWORD, __int64, __int64))CompositionInputObject::ObjectInit,
           (__int64)v53,
           &Handle);
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
