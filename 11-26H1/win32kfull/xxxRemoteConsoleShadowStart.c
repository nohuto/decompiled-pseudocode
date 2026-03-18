/*
 * XREFs of xxxRemoteConsoleShadowStart @ 0x1402D2D90
 * Callers:
 *     <none>
 * Callees:
 *     IsRemoteConnection @ 0x1400F99E0 (IsRemoteConnection.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     GetPhysicalScreenRect @ 0x14021550C (GetPhysicalScreenRect.c)
 *     bDrvReconnect @ 0x140291B28 (bDrvReconnect.c)
 *     ?FindMirrorDriver@@YAJPEBGPEAU_DISPLAY_DEVICEW@@@Z @ 0x1402D275C (-FindMirrorDriver@@YAJPEBGPEAU_DISPLAY_DEVICEW@@@Z.c)
 *     GreConsoleShadowStart @ 0x140335BD4 (GreConsoleShadowStart.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall xxxRemoteConsoleShadowStart(__int64 a1, __int64 a2, __int64 a3)
{
  int RemoteContext; // r13d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 UserSessionState; // rdi
  struct MOVESIZEDATA *v10; // rdx
  char v11; // si
  bool v12; // bl
  bool v13; // r14
  __int64 v14; // rax
  int v15; // r8d
  int v16; // edx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // ebx
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  NTSTATUS MirrorDriver; // ebx
  void *v24; // rcx
  struct _FILE_OBJECT *v25; // rcx
  void *v26; // rcx
  PVOID v27; // rax
  void *v28; // rcx
  __int64 v29; // rdx
  struct MOVESIZEDATA **v30; // rcx
  bool v31; // r14
  __int64 v32; // rax
  int v33; // r8d
  int v34; // edx
  void *v35; // rcx
  void *v36; // rcx
  void *v37; // rcx
  void *v38; // rcx
  __int64 v40; // rdx
  __m128i *PhysicalScreenRect; // rax
  __int64 v42; // rdx
  unsigned __int64 v43; // xmm0_8
  _DWORD *HDEV; // rax
  __int64 v45; // r8
  __int64 v46; // rdx
  PVOID Object; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  __int128 SourceString; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v50[68]; // [rsp+70h] [rbp-90h] BYREF
  __int16 v51; // [rsp+B4h] [rbp-4Ch]
  int v52; // [rsp+B8h] [rbp-48h]
  int v53; // [rsp+BCh] [rbp-44h]
  int v54; // [rsp+C0h] [rbp-40h]
  int v55; // [rsp+118h] [rbp+18h]
  int v56; // [rsp+11Ch] [rbp+1Ch]
  int v57; // [rsp+120h] [rbp+20h]
  _DISPLAY_DEVICEW v58; // [rsp+150h] [rbp+50h] BYREF

  *(_QWORD *)&SourceString = a2;
  memset_0(v50, 0, 0xDCuLL);
  memset_0(&v58, 0, sizeof(v58));
  DestinationString = 0LL;
  RemoteContext = GreGetRemoteContext();
  UserSessionState = W32GetUserSessionState(v7, v6);
  v10 = WPP_GLOBAL_Control;
  v11 = 1;
  v12 = 0;
  if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control )
  {
    v8 = *((unsigned int *)WPP_GLOBAL_Control + 11);
    if ( (v8 & 4) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
      v12 = 1;
  }
  v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v14 = W32GetUserSessionState(v8, WPP_GLOBAL_Control);
    LOBYTE(v15) = v13;
    LOBYTE(v16) = v12;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v16,
      v15,
      *(_QWORD *)(v14 + 69152),
      4,
      3,
      12,
      (__int64)&WPP_30f900ad07153b515057d0b02bb8d839_Traceguids);
  }
  if ( *(_DWORD *)(UserSessionState + 68748) && !IsRemoteConnection(v8, (__int64)v10) )
  {
    *(_DWORD *)(UserSessionState + 68756) = 0;
    *(_QWORD *)(UserSessionState + 68800) = 0LL;
    *(_QWORD *)(UserSessionState + 68760) = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(UserSessionState + 68768) = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(UserSessionState + 68784) = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(UserSessionState + 68792) = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(UserSessionState + 68832) = *(_QWORD *)(a1 + 268);
    *(_DWORD *)(UserSessionState + 68840) = *(_DWORD *)(a1 + 276);
    v19 = *(_DWORD *)(a1 + 240);
    *(_DWORD *)(W32GetUserSessionState(v18, v17) + 16264) = v19;
    v20 = *(_DWORD *)(a1 + 244);
    Object = 0LL;
    *(_DWORD *)(W32GetUserSessionState(v22, v21) + 14028) = v20;
    MirrorDriver = ObReferenceObjectByHandle(*(HANDLE *)(a1 + 72), 2u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    *(_QWORD *)(UserSessionState + 68808) = Object;
    if ( MirrorDriver < 0 )
      goto LABEL_24;
    v24 = *(void **)(UserSessionState + 68760);
    Object = 0LL;
    MirrorDriver = ObReferenceObjectByHandle(v24, 0, 0LL, 0, &Object, 0LL);
    if ( MirrorDriver < 0 )
      goto LABEL_24;
    v25 = (struct _FILE_OBJECT *)Object;
    *(_QWORD *)(UserSessionState + 68816) = Object;
    IoGetRelatedDeviceObject(v25);
    v26 = *(void **)(UserSessionState + 68792);
    Object = 0LL;
    MirrorDriver = ObReferenceObjectByHandle(v26, 0, 0LL, 0, &Object, 0LL);
    v27 = Object;
    *(_QWORD *)(UserSessionState + 68824) = Object;
    if ( MirrorDriver < 0 )
      goto LABEL_24;
    if ( (unsigned int)GreConsoleShadowStart(
                         RemoteContext,
                         *(_QWORD *)(UserSessionState + 68792),
                         (int)UserSessionState + 68944,
                         *(_QWORD *)(UserSessionState + 68816),
                         (__int64)v27) )
    {
      v28 = *(void **)(UserSessionState + 68768);
      Object = 0LL;
      MirrorDriver = ObReferenceObjectByHandle(v28, 0, 0LL, 0, &Object, 0LL);
      *(_QWORD *)(UserSessionState + 68776) = Object;
      if ( MirrorDriver < 0 )
      {
LABEL_24:
        v35 = *(void **)(UserSessionState + 68816);
        if ( v35 )
        {
          ObfDereferenceObject(v35);
          *(_QWORD *)(UserSessionState + 68816) = 0LL;
        }
        v36 = *(void **)(UserSessionState + 68824);
        if ( v36 )
        {
          ObfDereferenceObject(v36);
          *(_QWORD *)(UserSessionState + 68824) = 0LL;
        }
        v37 = *(void **)(UserSessionState + 68776);
        if ( v37 )
        {
          ObfDereferenceObject(v37);
          *(_QWORD *)(UserSessionState + 68776) = 0LL;
        }
        v38 = *(void **)(UserSessionState + 68808);
        if ( v38 )
        {
          ObfDereferenceObject(v38);
          *(_QWORD *)(UserSessionState + 68808) = 0LL;
        }
        return (unsigned int)MirrorDriver;
      }
      MirrorDriver = FindMirrorDriver((PCWSTR)SourceString, &v58);
      if ( MirrorDriver < 0 )
      {
        v30 = &WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (v30 = (struct MOVESIZEDATA **)*((unsigned int *)WPP_GLOBAL_Control + 11), ((unsigned __int8)v30 & 4) == 0)
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
        {
          v11 = 0;
        }
        v31 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v32 = W32GetUserSessionState(v30, v29);
          LOBYTE(v33) = v31;
          LOBYTE(v34) = v11;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v34,
            v33,
            *(_QWORD *)(v32 + 69152),
            4,
            3,
            13,
            (__int64)&WPP_30f900ad07153b515057d0b02bb8d839_Traceguids);
        }
        goto LABEL_24;
      }
      RtlInitUnicodeString(&DestinationString, v58.DeviceName);
      v52 = 1835040;
      v51 = 220;
      v55 = *(_DWORD *)(a1 + 248);
      PhysicalScreenRect = (__m128i *)GetPhysicalScreenRect(&SourceString, v40);
      v42 = PhysicalScreenRect->m128i_i64[0];
      v43 = _mm_srli_si128(*PhysicalScreenRect, 8).m128i_u64[0];
      v53 = (int)*PhysicalScreenRect;
      v54 = HIDWORD(v42);
      v57 = HIDWORD(v43) - HIDWORD(v42);
      v56 = v43 - v42;
      if ( !(unsigned int)xxxUserChangeDisplaySettings(&DestinationString, v50, 0LL, 268435457LL, 0LL, 0, a3)
        && !(unsigned int)xxxUserChangeDisplaySettings(0LL, 0LL, 0LL, 0LL, 0LL, 0, a3) )
      {
        HDEV = (_DWORD *)DrvGetHDEV(&DestinationString);
        *(_QWORD *)(UserSessionState + 68800) = HDEV;
        if ( HDEV )
        {
          v45 = *(_QWORD *)(UserSessionState + 68824);
          v46 = *(_QWORD *)(UserSessionState + 68792);
          *(_DWORD *)(UserSessionState + 68756) = 1;
          if ( (unsigned int)bDrvReconnect(HDEV, v46, v45, 0) )
          {
            HDXDrvEscape(*(_QWORD *)(UserSessionState + 68800), 2LL, *(_QWORD *)(UserSessionState + 68936), 8LL);
            return (unsigned int)MirrorDriver;
          }
        }
      }
    }
    MirrorDriver = -1073741823;
    goto LABEL_24;
  }
  return 3221225473LL;
}
