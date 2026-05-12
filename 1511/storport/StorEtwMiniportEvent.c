/*
 * XREFs of StorEtwMiniportEvent @ 0x1C00376C0
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0006190 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidDriverGetName @ 0x1C000B288 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C0015990 (__security_check_cookie.c)
 */

NTSTATUS __fastcall StorEtwMiniportEvent(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        __int64 a8,
        unsigned int a9,
        const wchar_t **a10,
        __int64 a11)
{
  unsigned int v11; // edi
  ULONG v15; // ebx
  EVENT_DESCRIPTOR v16; // xmm0
  __int64 v17; // rcx
  unsigned __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // edx
  const wchar_t *v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rcx
  unsigned int v25; // r9d
  const wchar_t **v26; // r10
  __int64 v27; // r11
  const wchar_t *v28; // rcx
  unsigned int v29; // r8d
  const wchar_t *v30; // rdx
  __int64 v31; // rax
  ULONG v32; // ebx
  __int64 *v33; // rcx
  __int64 v34; // rax
  char v36; // [rsp+30h] [rbp-D0h] BYREF
  char v37; // [rsp+31h] [rbp-CFh] BYREF
  char v38; // [rsp+32h] [rbp-CEh] BYREF
  __int64 v39; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v40; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v41[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v42; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A0h] BYREF
  GUID ActivityId; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  int *v46; // [rsp+90h] [rbp-70h]
  __int64 v47; // [rsp+98h] [rbp-68h]
  __int64 v48; // [rsp+A0h] [rbp-60h]
  int v49; // [rsp+A8h] [rbp-58h]
  int v50; // [rsp+ACh] [rbp-54h]
  __int64 v51; // [rsp+B0h] [rbp-50h]
  __int64 v52; // [rsp+B8h] [rbp-48h]
  char *v53; // [rsp+C0h] [rbp-40h]
  __int64 v54; // [rsp+C8h] [rbp-38h]
  char *v55; // [rsp+D0h] [rbp-30h]
  __int64 v56; // [rsp+D8h] [rbp-28h]
  char *v57; // [rsp+E0h] [rbp-20h]
  __int64 v58; // [rsp+E8h] [rbp-18h]
  __int64 *v59; // [rsp+F0h] [rbp-10h]
  __int64 v60; // [rsp+F8h] [rbp-8h]
  __int64 *v61; // [rsp+100h] [rbp+0h]
  __int64 v62; // [rsp+108h] [rbp+8h]
  int v63; // [rsp+270h] [rbp+170h] BYREF

  v63 = a3;
  v11 = a9;
  v39 = a8;
  memset(v41, 0, sizeof(v41));
  v15 = 4;
  ActivityId.Data1 = 0;
  *(_QWORD *)&ActivityId.Data2 = 0LL;
  *(_DWORD *)&ActivityId.Data4[4] = 0;
  v42 = 0LL;
  v37 = -1;
  v36 = -1;
  v38 = -1;
  v40 = 0LL;
  if ( a8 )
  {
    if ( a9 > 2 )
    {
      if ( a9 > 4 )
        v16 = (EVENT_DESCRIPTOR)EventMiniportRequest8;
      else
        v16 = (EVENT_DESCRIPTOR)EventMiniportRequest4;
    }
    else
    {
      v16 = (EVENT_DESCRIPTOR)EventMiniportRequest2;
    }
  }
  else if ( a2 )
  {
    if ( a9 > 2 )
    {
      if ( a9 > 4 )
        v16 = (EVENT_DESCRIPTOR)EventMiniportLun8;
      else
        v16 = (EVENT_DESCRIPTOR)EventMiniportLun4;
    }
    else
    {
      v16 = (EVENT_DESCRIPTOR)EventMiniportLun2;
    }
  }
  else if ( a9 > 2 )
  {
    if ( a9 > 4 )
      v16 = (EVENT_DESCRIPTOR)EventMiniport8;
    else
      v16 = (EVENT_DESCRIPTOR)EventMiniport4;
  }
  else
  {
    v16 = (EVENT_DESCRIPTOR)EventMiniport2;
  }
  v17 = 0x200000000000LL;
  EventDescriptor = v16;
  EventDescriptor.Level = a6;
  EventDescriptor.Opcode = a7;
  if ( (a5 & 1) != 0 )
    v17 = 0x200000600000LL;
  if ( (a5 & 2) != 0 )
    v17 |= 0x20uLL;
  if ( (a5 & 4) != 0 )
    v17 |= 0x100000000uLL;
  if ( (a5 & 8) != 0 )
    v17 |= 0x400000000uLL;
  v18 = v17 | v16.Keyword & 0xFF00000000000000uLL;
  v19 = *(_QWORD *)(a1 + 16);
  EventDescriptor.Keyword = v18;
  RaidDriverGetName(v19, (__int64)v41);
  if ( v41[1] )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( *(_WORD *)(v41[1] + 2 * v20) );
    v21 = 2 * v20 + 2;
  }
  else
  {
    v21 = 10;
  }
  UserData.Size = v21;
  v22 = L"NULL";
  UserData.Reserved = 0;
  if ( v41[1] )
    v22 = (const wchar_t *)v41[1];
  v47 = 4LL;
  UserData.Ptr = (unsigned __int64)v22;
  v46 = &v63;
  if ( !a4 )
    return -1073741811;
  v23 = -1LL;
  do
    ++v23;
  while ( *(_WORD *)(a4 + 2 * v23) );
  if ( (unsigned int)(v23 - 1) > 0x1F )
    return -1073741811;
  v49 = 2 * v23 + 2;
  v51 = a1 + 56;
  v48 = a4;
  v50 = 0;
  v52 = 4LL;
  if ( v39 || a2 )
  {
    if ( a2 && *(_WORD *)a2 == 1 )
    {
      v37 = *(_BYTE *)(a2 + 8);
      v36 = *(_BYTE *)(a2 + 9);
      v38 = *(_BYTE *)(a2 + 10);
    }
    v53 = &v37;
    v55 = &v36;
    v57 = &v38;
    v54 = 1LL;
    v15 = 7;
    v56 = 1LL;
    v58 = 1LL;
    if ( v39 )
    {
      if ( *(_BYTE *)(v39 + 2) == 40 )
        v24 = *(_QWORD *)(v39 + 80);
      else
        v24 = *(_QWORD *)(v39 + 48);
      v40 = v24;
      if ( v24 )
        IoGetActivityIdIrp(v24, &ActivityId);
      v60 = 8LL;
      v59 = &v40;
      v15 = 9;
      v62 = 8LL;
      v61 = &v39;
    }
  }
  v25 = 0;
  if ( v11 )
  {
    v26 = a10;
    v27 = a11;
    do
    {
      v28 = *v26;
      if ( !*v26 )
        goto LABEL_56;
      v23 = -1LL;
      do
        ++v23;
      while ( v28[v23] );
      if ( (unsigned int)v23 > 0x10 )
        return -1073741811;
      v29 = 2 * v23 + 2;
      if ( !(_DWORD)v23 )
LABEL_56:
        v29 = 10;
      if ( !v28 || (v30 = *v26, !(_DWORD)v23) )
        v30 = L"NULL";
      v31 = v15;
      v32 = v15 + 1;
      v31 *= 2LL;
      *(&UserData.Ptr + v31) = (unsigned __int64)v30;
      *(&UserData.Size + 2 * v31) = v29;
      *(&UserData.Reserved + 2 * v31) = 0;
      if ( v28 && (_DWORD)v23 )
        v33 = (__int64 *)(v27 + 8LL * v25);
      else
        v33 = &v42;
      ++v25;
      v34 = 2LL * v32;
      v15 = v32 + 1;
      ++v26;
      *(&UserData.Ptr + v34) = (unsigned __int64)v33;
      *((_QWORD *)&UserData.Size + v34) = 8LL;
    }
    while ( v25 < v11 );
  }
  return EtwWrite(Microsoft_Windows_StorPortHandle, &EventDescriptor, &ActivityId, v15, &UserData);
}
