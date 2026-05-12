/*
 * XREFs of StorEtwMiniportEvent @ 0x1C003B004
 * Callers:
 *     StorEtwMiniportEventProxy @ 0x1C002D2A8 (StorEtwMiniportEventProxy.c)
 * Callees:
 *     RaidDriverGetName @ 0x1C000F5AC (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
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
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // edx
  const wchar_t *v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rcx
  unsigned int v24; // r9d
  const wchar_t **v25; // r10
  __int64 v26; // r11
  const wchar_t *v27; // rcx
  unsigned int v28; // r8d
  const wchar_t *v29; // rdx
  __int64 v30; // rax
  ULONG v31; // ebx
  __int64 *v32; // rcx
  __int64 v33; // rax
  char v35; // [rsp+30h] [rbp-D0h] BYREF
  char v36; // [rsp+31h] [rbp-CFh] BYREF
  char v37; // [rsp+32h] [rbp-CEh] BYREF
  __int64 v38; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v39; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v40[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v41; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A0h] BYREF
  GUID ActivityId; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  int *v45; // [rsp+90h] [rbp-70h]
  __int64 v46; // [rsp+98h] [rbp-68h]
  __int64 v47; // [rsp+A0h] [rbp-60h]
  int v48; // [rsp+A8h] [rbp-58h]
  int v49; // [rsp+ACh] [rbp-54h]
  __int64 v50; // [rsp+B0h] [rbp-50h]
  __int64 v51; // [rsp+B8h] [rbp-48h]
  char *v52; // [rsp+C0h] [rbp-40h]
  __int64 v53; // [rsp+C8h] [rbp-38h]
  char *v54; // [rsp+D0h] [rbp-30h]
  __int64 v55; // [rsp+D8h] [rbp-28h]
  char *v56; // [rsp+E0h] [rbp-20h]
  __int64 v57; // [rsp+E8h] [rbp-18h]
  __int64 *v58; // [rsp+F0h] [rbp-10h]
  __int64 v59; // [rsp+F8h] [rbp-8h]
  __int64 *v60; // [rsp+100h] [rbp+0h]
  __int64 v61; // [rsp+108h] [rbp+8h]
  int v62; // [rsp+270h] [rbp+170h] BYREF

  v62 = a3;
  v11 = a9;
  v39 = a8;
  memset(v40, 0, sizeof(v40));
  v15 = 4;
  ActivityId.Data1 = 0;
  *(_QWORD *)&ActivityId.Data2 = 0LL;
  *(_DWORD *)&ActivityId.Data4[4] = 0;
  v41 = 0LL;
  v35 = -1;
  v36 = -1;
  v37 = -1;
  v38 = 0LL;
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
  EventDescriptor = v16;
  EventDescriptor.Level = a6;
  EventDescriptor.Opcode = a7;
  v17 = 0x200000000000LL;
  if ( (a5 & 1) != 0 )
    v17 = 0x200000600000LL;
  if ( (a5 & 2) != 0 )
    v17 |= 0x20uLL;
  if ( (a5 & 4) != 0 )
    v17 |= 0x100000000uLL;
  if ( (a5 & 8) != 0 )
    v17 |= 0x400000000uLL;
  v18 = *(_QWORD *)(a1 + 16);
  EventDescriptor.Keyword = v17 | v16.Keyword & 0xFF00000000000000uLL;
  RaidDriverGetName(v18, (__int64)v40);
  if ( v40[1] )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *(_WORD *)(v40[1] + 2 * v19) );
    v20 = 2 * v19 + 2;
  }
  else
  {
    v20 = 10;
  }
  UserData.Size = v20;
  v21 = L"NULL";
  UserData.Reserved = 0;
  if ( v40[1] )
    v21 = (const wchar_t *)v40[1];
  v46 = 4LL;
  UserData.Ptr = (unsigned __int64)v21;
  v45 = &v62;
  if ( !a4 )
    return -1073741811;
  v22 = -1LL;
  do
    ++v22;
  while ( *(_WORD *)(a4 + 2 * v22) );
  if ( (unsigned int)(v22 - 1) > 0x1F )
    return -1073741811;
  v48 = 2 * v22 + 2;
  v50 = a1 + 56;
  v47 = a4;
  v49 = 0;
  v51 = 4LL;
  if ( v39 || a2 )
  {
    if ( a2 && *(_WORD *)a2 == 1 )
    {
      v35 = *(_BYTE *)(a2 + 8);
      v36 = *(_BYTE *)(a2 + 9);
      v37 = *(_BYTE *)(a2 + 10);
    }
    v52 = &v35;
    v54 = &v36;
    v56 = &v37;
    v53 = 1LL;
    v15 = 7;
    v55 = 1LL;
    v57 = 1LL;
    if ( v39 )
    {
      if ( *(_BYTE *)(v39 + 2) == 40 )
        v23 = *(_QWORD *)(v39 + 80);
      else
        v23 = *(_QWORD *)(v39 + 48);
      v38 = v23;
      if ( v23 )
        IoGetActivityIdIrp(v23, &ActivityId);
      v59 = 8LL;
      v58 = &v38;
      v15 = 9;
      v61 = 8LL;
      v60 = &v39;
    }
  }
  v24 = 0;
  if ( v11 )
  {
    v25 = a10;
    v26 = a11;
    do
    {
      v27 = *v25;
      if ( !*v25 )
        goto LABEL_56;
      v22 = -1LL;
      do
        ++v22;
      while ( v27[v22] );
      if ( (unsigned int)v22 > 0x10 )
        return -1073741811;
      v28 = 2 * v22 + 2;
      if ( !(_DWORD)v22 )
LABEL_56:
        v28 = 10;
      if ( !v27 || (v29 = *v25, !(_DWORD)v22) )
        v29 = L"NULL";
      v30 = v15;
      v31 = v15 + 1;
      v30 *= 2LL;
      *(&UserData.Ptr + v30) = (unsigned __int64)v29;
      *(&UserData.Size + 2 * v30) = v28;
      *(&UserData.Reserved + 2 * v30) = 0;
      if ( v27 && (_DWORD)v22 )
        v32 = (__int64 *)(v26 + 8LL * v24);
      else
        v32 = &v41;
      ++v24;
      v33 = 2LL * v31;
      v15 = v31 + 1;
      ++v25;
      *(&UserData.Ptr + v33) = (unsigned __int64)v32;
      *((_QWORD *)&UserData.Size + v33) = 8LL;
    }
    while ( v24 < v11 );
  }
  return EtwWrite(Microsoft_Windows_StorPortHandle, &EventDescriptor, &ActivityId, v15, &UserData);
}
