/*
 * XREFs of EvtIntReportEventWorker @ 0x18000E64C
 * Callers:
 *     EvtIntReportEventAndSourceAsync @ 0x18000E5E0 (EvtIntReportEventAndSourceAsync.c)
 *     EvtIntReportAuthzEventAndSourceAsync @ 0x1800F4E30 (EvtIntReportAuthzEventAndSourceAsync.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18000F090 (RtlSetLastWin32Error.c)
 *     EtwEventWriteFull @ 0x18000F610 (EtwEventWriteFull.c)
 *     RtlValidSid @ 0x180020320 (RtlValidSid.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     EtwWriteUMSecurityEvent @ 0x18006E250 (EtwWriteUMSecurityEvent.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     _local_unwind @ 0x180084C50 (_local_unwind.c)
 */

_BOOL8 __fastcall EvtIntReportEventWorker(
        REGHANDLE a1,
        int a2,
        unsigned __int64 a3,
        __int16 a4,
        unsigned __int16 a5,
        char a6,
        unsigned __int8 *Sid,
        unsigned __int16 a8,
        int a9,
        __int64 a10,
        unsigned __int64 a11)
{
  unsigned __int8 *v13; // r15
  _EVENT_DATA_DESCRIPTOR *UserData; // rdi
  int v15; // ecx
  unsigned __int8 v16; // r14
  unsigned int v17; // ecx
  unsigned __int64 v18; // rdx
  int v19; // eax
  unsigned int v20; // r10d
  int v21; // eax
  __int64 v22; // rax
  unsigned int v23; // r10d
  unsigned int v24; // edx
  unsigned __int64 v25; // r8
  __int64 v26; // rax
  unsigned int v27; // ecx
  __int64 v28; // rax
  __int64 v29; // rax
  ULONG UserDataCount; // r10d
  int v31; // edx
  __int64 v32; // rcx
  LONG v33; // eax
  __int64 v34; // rax
  __int64 v36; // [rsp+0h] [rbp-2C8h] BYREF
  int v37; // [rsp+40h] [rbp-288h]
  LONG Win32Error; // [rsp+44h] [rbp-284h]
  int v39; // [rsp+48h] [rbp-280h] BYREF
  int v40; // [rsp+4Ch] [rbp-27Ch] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-278h] BYREF
  int v42; // [rsp+60h] [rbp-268h]
  unsigned int v43; // [rsp+64h] [rbp-264h]
  _EVENT_DATA_DESCRIPTOR *p_BaseAddress; // [rsp+68h] [rbp-260h]
  REGHANDLE RegHandle; // [rsp+70h] [rbp-258h]
  __int64 v46; // [rsp+78h] [rbp-250h] BYREF
  __int64 *v47; // [rsp+80h] [rbp-248h]
  _EVENT_DATA_DESCRIPTOR BaseAddress; // [rsp+90h] [rbp-238h] BYREF

  v47 = &v36;
  v42 = a2;
  RegHandle = a1;
  v13 = Sid;
  Win32Error = 0;
  UserData = &BaseAddress;
  p_BaseAddress = &BaseAddress;
  v15 = 7;
  v16 = 0;
  v39 = 0;
  if ( !a11 && a9 || !a10 && a8 || !a3 )
  {
    Win32Error = 87;
    goto LABEL_36;
  }
  if ( Sid )
    v15 = 8;
  v17 = a8 + v15;
  if ( a9 )
    ++v17;
  if ( v17 > 0x20 )
  {
    UserData = (_EVENT_DATA_DESCRIPTOR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 16LL * v17);
    p_BaseAddress = UserData;
    if ( !UserData )
    {
      Win32Error = 8;
      goto LABEL_36;
    }
  }
  v18 = 0x8000000000000000uLL;
  if ( a4 )
  {
    switch ( a4 )
    {
      case 1:
        v16 = 2;
        break;
      case 2:
        v16 = 3;
        break;
      case 4:
        v16 = 4;
        break;
      case 8:
        v18 = 0x8020000000000000uLL;
        break;
      case 16:
        v18 = 0x8010000000000000uLL;
        break;
    }
  }
  else
  {
    v16 = 0;
  }
  *(_DWORD *)&EventDescriptor.Id = 0;
  EventDescriptor.Level = v16;
  EventDescriptor.Task = a5;
  EventDescriptor.Opcode = 0;
  EventDescriptor.Keyword = v18;
  if ( v13 )
  {
    if ( !RtlValidSid(v13) )
    {
      Win32Error = 87;
      local_unwind(v47, &loc_18000E99C);
      goto LABEL_33;
    }
    v39 = 4 * v13[1] + 8;
  }
  v46 = MEMORY[0x7FFE0014];
  UserData->Ptr = (unsigned __int64)&v46;
  *(_QWORD *)&UserData->Size = 8LL;
  UserData[1].Ptr = (unsigned __int64)&a6;
  *(_QWORD *)&UserData[1].Size = 4LL;
  v37 = 2;
  v34 = -1LL;
  do
    ++v34;
  while ( *(_WORD *)(a3 + 2 * v34) );
  v40 = (unsigned __int16)(v34 + 1);
  UserData[2].Ptr = (unsigned __int64)&v40;
  *(_QWORD *)&UserData[2].Size = 2LL;
  v19 = 2 * v40;
  UserData[3].Ptr = a3;
  UserData[3].Size = v19;
  UserData[3].Reserved = 0;
  UserData[4].Ptr = (unsigned __int64)&v39;
  *(_QWORD *)&UserData[4].Size = 2LL;
  v20 = 5;
  v37 = 5;
  v21 = v39;
  if ( v39 )
  {
    UserData[5].Ptr = (unsigned __int64)v13;
    UserData[5].Size = v21;
    UserData[5].Reserved = 0;
    v20 = 6;
    v37 = 6;
  }
  v22 = v20;
  UserData[v22].Ptr = (unsigned __int64)&a8;
  *(_QWORD *)&UserData[v22].Size = 2LL;
  v23 = v20 + 1;
  v37 = v23;
  v24 = 0;
  v43 = 0;
  while ( v24 < a8 )
  {
    v25 = *(_QWORD *)(a10 + 8LL * v24);
    v26 = -1LL;
    do
      ++v26;
    while ( *(_WORD *)(v25 + 2 * v26) );
    v27 = 2 * v26 + 2;
    v28 = v23;
    UserData[v28].Ptr = v25;
    *(_QWORD *)&UserData[v28].Size = v27;
    v37 = ++v23;
    v43 = ++v24;
  }
  v29 = v23;
  UserData[v29].Ptr = (unsigned __int64)&a9;
  *(_QWORD *)&UserData[v29].Size = 4LL;
  UserDataCount = v23 + 1;
  v37 = UserDataCount;
  v31 = a9;
  if ( a9 )
  {
    v32 = UserDataCount;
    UserData[v32].Ptr = a11;
    UserData[v32].Size = v31;
    UserData[v32].Reserved = 0;
    v37 = ++UserDataCount;
  }
  if ( !v42 )
  {
    v33 = EtwEventWriteFull(RegHandle, &EventDescriptor, 4u, 0LL, 0LL, UserDataCount, UserData);
    goto LABEL_34;
  }
LABEL_33:
  v33 = EtwWriteUMSecurityEvent(&EventDescriptor, 4u, UserDataCount, UserData);
LABEL_34:
  Win32Error = v33;
  if ( UserData != &BaseAddress )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, UserData);
LABEL_36:
  RtlSetLastWin32Error(Win32Error);
  return Win32Error == 0;
}
