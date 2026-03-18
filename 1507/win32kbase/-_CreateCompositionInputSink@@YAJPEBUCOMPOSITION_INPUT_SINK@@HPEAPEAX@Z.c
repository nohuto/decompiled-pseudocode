/*
 * XREFs of ?_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z @ 0x1C0024B14
 * Callers:
 *     NtCreateImplicitCompositionInputSink @ 0x1C0018CC0 (NtCreateImplicitCompositionInputSink.c)
 *     NtCreateCompositionInputSink @ 0x1C0019140 (NtCreateCompositionInputSink.c)
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C000EA40 (UserIsCurrentProcessDwm.c)
 *     ?Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVICompositionObject@@@Z3PEAPEAX@Z @ 0x1C000FC10 (-Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEA.c)
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C0032F10 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

__int64 __fastcall _CreateCompositionInputSink(const struct COMPOSITION_INPUT_SINK *a1, int a2, void **a3)
{
  const struct COMPOSITION_INPUT_SINK *v4; // r9
  int v5; // edi
  __int64 v6; // r15
  char *v7; // rcx
  char *v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v12; // [rsp+28h] [rbp-330h]
  ACCESS_MASK v13; // [rsp+58h] [rbp-300h]
  __int64 v15; // [rsp+68h] [rbp-2F0h] BYREF
  HANDLE Handle[2]; // [rsp+70h] [rbp-2E8h] BYREF
  int v17; // [rsp+80h] [rbp-2D8h] BYREF
  __int64 v18; // [rsp+88h] [rbp-2D0h]
  __int64 v19; // [rsp+90h] [rbp-2C8h]
  int v20; // [rsp+98h] [rbp-2C0h]
  __int64 v21; // [rsp+A0h] [rbp-2B8h]
  __int64 v22; // [rsp+A8h] [rbp-2B0h]
  __int128 v23; // [rsp+B0h] [rbp-2A8h]
  __int128 v24; // [rsp+C0h] [rbp-298h]
  __int128 v25; // [rsp+D0h] [rbp-288h]
  __int128 v26; // [rsp+E0h] [rbp-278h]
  __int128 v27; // [rsp+F0h] [rbp-268h]
  __int128 v28; // [rsp+100h] [rbp-258h]
  __int128 v29; // [rsp+110h] [rbp-248h]
  __int128 v30; // [rsp+120h] [rbp-238h]
  __int128 v31; // [rsp+130h] [rbp-228h]
  __int128 v32; // [rsp+140h] [rbp-218h]
  __int128 v33; // [rsp+150h] [rbp-208h]
  __int128 v34; // [rsp+160h] [rbp-1F8h]
  __int64 v35; // [rsp+170h] [rbp-1E8h]
  __int128 v36; // [rsp+180h] [rbp-1D8h]
  __int128 v37; // [rsp+190h] [rbp-1C8h]
  __int128 v38; // [rsp+1A0h] [rbp-1B8h]
  __int128 v39; // [rsp+1B0h] [rbp-1A8h]
  __int128 v40; // [rsp+1C0h] [rbp-198h]
  __int128 v41; // [rsp+1D0h] [rbp-188h]
  __int128 v42; // [rsp+1E0h] [rbp-178h]
  __int128 v43; // [rsp+1F0h] [rbp-168h]
  __int128 v44; // [rsp+200h] [rbp-158h]
  __int128 v45; // [rsp+210h] [rbp-148h]
  __int128 v46; // [rsp+220h] [rbp-138h]
  __int128 v47; // [rsp+230h] [rbp-128h]
  __int64 v48; // [rsp+240h] [rbp-118h]
  _OWORD v49[12]; // [rsp+250h] [rbp-108h] BYREF
  __int64 v50; // [rsp+310h] [rbp-48h]
  int v51; // [rsp+318h] [rbp-40h]

  v4 = a1;
  Handle[1] = a3;
  v5 = 0;
  Handle[0] = (HANDLE)-1LL;
  v6 = 0LL;
  v15 = 0LL;
  if ( a1 )
  {
    v7 = (char *)a1 + 200;
    if ( v7 < (char *)v4 || (unsigned __int64)v7 > MmUserProbeAddress )
      v4 = (const struct COMPOSITION_INPUT_SINK *)MmUserProbeAddress;
    v36 = *(_OWORD *)v4;
    v37 = *((_OWORD *)v4 + 1);
    v38 = *((_OWORD *)v4 + 2);
    v39 = *((_OWORD *)v4 + 3);
    v40 = *((_OWORD *)v4 + 4);
    v41 = *((_OWORD *)v4 + 5);
    v42 = *((_OWORD *)v4 + 6);
    v43 = *((_OWORD *)v4 + 7);
    v8 = (char *)v4 + 128;
    v44 = *(_OWORD *)v8;
    v45 = *((_OWORD *)v8 + 1);
    v46 = *((_OWORD *)v8 + 2);
    v47 = *((_OWORD *)v8 + 3);
    v48 = *((_QWORD *)v8 + 8);
    v23 = v36;
    v24 = v37;
    v25 = v38;
    v26 = v39;
    v27 = v40;
    v28 = v41;
    v29 = v42;
    v30 = v43;
    v31 = v44;
    v32 = v45;
    v33 = v46;
    v34 = v47;
    v35 = v48;
  }
  else
  {
    v5 = -1073741811;
  }
  if ( v5 >= 0 )
  {
    v5 = 0;
    if ( (_DWORD)v23 != 200 || DWORD2(v23) > 4 || DWORD2(v26) > 4 || DWORD2(v29) > 4 || DWORD2(v32) > 4 )
      v5 = -1073741811;
  }
  if ( UserIsCurrentProcessDwm() )
  {
    v9 = 0LL;
    v13 = 3;
  }
  else
  {
    v9 = 0x80000000LL;
    v13 = 0x80000000;
  }
  if ( v5 >= 0 )
  {
    v5 = UserAllocDefaultCompositionSecurityDescriptor(v9, &v15);
    v6 = v15;
    if ( v5 >= 0 )
    {
      v17 = 48;
      v18 = 0LL;
      v20 = 0;
      v19 = 0LL;
      v21 = v15;
      v22 = 0LL;
      KeEnterCriticalRegion();
      v49[0] = v23;
      v49[1] = v24;
      v49[2] = v25;
      v49[3] = v26;
      v49[4] = v27;
      v49[5] = v28;
      v49[6] = v29;
      v49[7] = v30;
      v49[8] = v31;
      v49[9] = v32;
      v49[10] = v33;
      v49[11] = v34;
      v50 = v35;
      v51 ^= (a2 ^ v51) & 1;
      LODWORD(v12) = 192;
      LOBYTE(v10) = 1;
      v5 = CompositionObject::Create(
             0LL,
             (__int64)&v17,
             v13,
             v10,
             3,
             v12,
             (__int64 (__fastcall *)(_QWORD, __int64, __int64))CompositionInputObject::ObjectInit,
             (__int64)v49,
             Handle);
      KeLeaveCriticalRegion();
    }
  }
  if ( a3 )
  {
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a3 = Handle[0];
  }
  else
  {
    v5 = -1073741811;
  }
  if ( v6 )
    Win32FreePool(v6);
  if ( v5 < 0 && Handle[0] != (HANDLE)-1LL )
    NtClose(Handle[0]);
  return (unsigned int)v5;
}
