/*
 * XREFs of RaUnitAsyncError @ 0x1C000C3A0
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0006180 (RaidUnitCompleteRequest.c)
 * Callees:
 *     RaidSrbStatusToNtStatus @ 0x1C00036EC (RaidSrbStatusToNtStatus.c)
 *     RaidCompleteRequestEx @ 0x1C0007190 (RaidCompleteRequestEx.c)
 *     RaidUnitProcessBusyRequest @ 0x1C000BDF0 (RaidUnitProcessBusyRequest.c)
 *     RaidUnitReleaseIrp @ 0x1C000C880 (RaidUnitReleaseIrp.c)
 *     GetSrbScsiData @ 0x1C0018B7C (GetSrbScsiData.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AA20 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qqD @ 0x1C002B0BC (WPP_SF_qqD.c)
 *     RaidLogRequestComplete @ 0x1C0036A20 (RaidLogRequestComplete.c)
 *     WPP_SF_qdq @ 0x1C00392D4 (WPP_SF_qdq.c)
 *     WPP_SF_qqDDD @ 0x1C0039334 (WPP_SF_qqDDD.c)
 */

char __fastcall RaUnitAsyncError(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char v3; // r10
  IRP *v4; // rbp
  char v5; // r13
  char *v6; // rdi
  int v8; // r12d
  unsigned int v9; // r11d
  __int64 v10; // r9
  __int64 v11; // rcx
  unsigned __int64 v12; // r8
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // ecx
  unsigned __int64 v16; // rcx
  PDEVICE_OBJECT v17; // r10
  unsigned __int64 v18; // r8
  int v19; // ecx
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  _LARGE_INTEGER ByteOffset; // rsi
  unsigned int v22; // eax
  _BYTE *v23; // rdx
  unsigned __int8 v24; // r14
  unsigned __int8 v25; // r12
  unsigned __int8 v26; // si
  __int64 v27; // rdi
  char v28; // r9
  _BYTE *v29; // rcx
  _BYTE *v30; // rax
  __int64 v31; // rcx
  unsigned int v32; // eax
  unsigned __int64 v33; // rcx
  bool v34; // zf
  void (__fastcall **v35)(__int64, __int64); // rax
  _BYTE *v37; // [rsp+40h] [rbp-48h] BYREF
  char v39; // [rsp+A0h] [rbp+18h] BYREF
  unsigned int v40; // [rsp+A8h] [rbp+20h]

  v2 = *(_QWORD *)(a2 + 168);
  v3 = 0;
  v4 = *(IRP **)(a2 + 160);
  v5 = 0;
  v6 = 0LL;
  if ( *(_BYTE *)(v2 + 2) == 40 )
  {
    v8 = *(_DWORD *)(v2 + 24);
    v40 = *(_DWORD *)(v2 + 60);
    if ( !*(_DWORD *)(v2 + 20) )
    {
      v9 = *(_DWORD *)(v2 + 56);
      v10 = 0LL;
      if ( v9 )
      {
        while ( 1 )
        {
          v11 = *(unsigned int *)(v2 + 4 * v10 + 120);
          if ( (unsigned int)v11 >= 0x80 )
          {
            v12 = *(unsigned int *)(v2 + 16);
            if ( (unsigned int)v11 <= (unsigned int)v12 )
              break;
          }
LABEL_16:
          v10 = (unsigned int)(v10 + 1);
          if ( (unsigned int)v10 >= v9 )
            goto LABEL_20;
        }
        v13 = (unsigned int)v11;
        v14 = *(_DWORD *)(v11 + v2) - 64;
        if ( v14 )
        {
          v15 = v14 - 1;
          if ( v15 )
          {
            if ( v15 == 1 && v13 + 40 <= v12 )
            {
              v6 = (char *)(v13 + v2 + 8);
              goto LABEL_19;
            }
            goto LABEL_15;
          }
          v16 = v13 + 56;
        }
        else
        {
          v16 = v13 + 40;
        }
        if ( v16 <= v12 )
        {
          v3 = 1;
          v6 = (char *)(v13 + v2 + 8);
          v5 = *v6;
        }
LABEL_15:
        if ( v3 )
          goto LABEL_20;
        goto LABEL_16;
      }
    }
  }
  else
  {
    v6 = (char *)(v2 + 4);
    v8 = *(_DWORD *)(v2 + 12);
    v40 = *(_DWORD *)(v2 + 16);
LABEL_19:
    v5 = *v6;
  }
LABEL_20:
  v17 = WPP_GLOBAL_Control;
  v18 = 4294967103LL;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      60LL,
      &WPP_a0aaf6c2955e31bbd69faa467326e0b4_Traceguids,
      a1,
      v2,
      *(_BYTE *)(v2 + 3) & 0x3F);
    v17 = WPP_GLOBAL_Control;
    v18 = 4294967103LL;
  }
  v19 = *(_BYTE *)(v2 + 3) & 0x3F;
  if ( v19 == 5 )
    goto LABEL_28;
  if ( ((v5 - 8) & 0xDF) != 0 && v19 != 37 )
    goto LABEL_41;
  if ( ((v5 - 8) & 0xDF) == 0 )
  {
LABEL_28:
    ++*(_DWORD *)(a1 + 1840);
    v17 = WPP_GLOBAL_Control;
  }
  CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
  ByteOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
  if ( *(_BYTE *)(a1 + 2552) && (g_QosFlags & 1) == 0
    || (v22 = *(_DWORD *)(a1 + 1512), ByteOffset.LowPart >= v22) && v22 && (*(_BYTE *)(v2 + 3) & 0x3F) != 0x25 )
  {
    if ( v17 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v17->Timer) & 8) != 0 && BYTE1(v17->Timer) >= 3u )
      WPP_SF_qdq(v17->AttachedDevice, 62LL, 4294967103LL, a1, ByteOffset.LowPart, v2);
    *(_BYTE *)(v2 + 3) = 4;
    if ( v5 == 8 )
      *v6 = 40;
    v17 = WPP_GLOBAL_Control;
LABEL_41:
    if ( (v8 & 0x100) == 0 && !*(_BYTE *)(a1 + 436) )
    {
      *(_BYTE *)(a1 + 436) = 1;
      *(_BYTE *)(v2 + 3) |= 0x40u;
      v17 = WPP_GLOBAL_Control;
    }
    v23 = 0LL;
    LOBYTE(v18) = 0;
    v37 = 0LL;
    v24 = 0;
    v39 = 0;
    v25 = 0;
    v26 = 0;
    v27 = *(_QWORD *)(a2 + 168);
    if ( *(_BYTE *)(v27 + 2) == 40 )
    {
      if ( !*(_DWORD *)(v27 + 20) )
      {
        GetSrbScsiData(v27, 0, 0, 0, (__int64)&v37, (__int64)&v39);
        v23 = v37;
        LOBYTE(v18) = v39;
        v17 = WPP_GLOBAL_Control;
      }
    }
    else
    {
      v23 = *(_BYTE **)(v27 + 32);
      LOBYTE(v18) = *(_BYTE *)(v27 + 11);
    }
    if ( *(char *)(v27 + 3) >= 0 || !v23 )
    {
LABEL_76:
      if ( (*(_BYTE *)(v2 + 3) & 0x3F) == 5 || ((v5 - 8) & 0xDF) == 0 )
        v4->IoStatus.Status = -1073741661;
      else
        v4->IoStatus.Status = RaidSrbStatusToNtStatus(*(_BYTE *)(v2 + 3));
      if ( (*(_BYTE *)(v2 + 3) & 0x3F) == 0x12 )
        v4->IoStatus.Information = v40;
      else
        v4->IoStatus.Information = 0LL;
      RaidUnitReleaseIrp(v4);
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_qqD(
          WPP_GLOBAL_Control->AttachedDevice,
          63LL,
          &WPP_a0aaf6c2955e31bbd69faa467326e0b4_Traceguids,
          a1,
          v4,
          v4->IoStatus.Status);
      }
      if ( (qword_1C004F2A0 & 0x10) != 0 )
        RaidLogRequestComplete(*(_QWORD *)(a1 + 24), v4, v2);
      RaidCompleteRequestEx(v4, 0, v4->IoStatus.Status);
      return 1;
    }
    v28 = 0;
    if ( (_BYTE)v18 )
    {
      v29 = &v23[(unsigned __int8)v18];
      v30 = v23 + 8;
      if ( (unsigned __int8)((*v23 & 0x7F) - 114) <= 1u )
      {
        if ( v30 > v29 )
          goto LABEL_64;
        v25 = v23[2];
        v24 = v23[1] & 0xF;
        v26 = v23[3];
      }
      else
      {
        if ( v30 > v29 )
          goto LABEL_64;
        v31 = (unsigned int)(unsigned __int8)v23[7] + 8;
        v32 = (unsigned __int8)v18;
        v18 = (unsigned __int64)(v23 + 13);
        if ( (unsigned int)v31 > v32 )
          v31 = v32;
        v24 = v23[2] & 0xF;
        v33 = (unsigned __int64)&v23[v31];
        if ( v18 > v33 )
          v25 = 0;
        else
          v25 = v23[12];
        if ( (unsigned __int64)(v23 + 14) > v33 )
          v26 = 0;
        else
          v26 = *(_BYTE *)v18;
      }
      v28 = 1;
    }
LABEL_64:
    if ( v28 )
    {
      if ( v17 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v17->Timer) & 8) != 0 && BYTE1(v17->Timer) >= 3u )
        WPP_SF_qqDDD(v17->AttachedDevice, v24, v18, a1, v27, v24, v25, v26);
      v34 = RaidUnitHandleReportLunsDataChanged == 0LL;
      v35 = (void (__fastcall **)(__int64, __int64))&unk_1C0045380;
      while ( !v34 )
      {
        if ( *(_BYTE *)v35 == v24 && *((_BYTE *)v35 + 1) == v25 && *((_BYTE *)v35 + 2) == v26 )
        {
          v35[1](a1, a2);
          goto LABEL_76;
        }
        v35 += 2;
        v34 = v35[1] == 0LL;
      }
    }
    goto LABEL_76;
  }
  if ( v17 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v17->Timer) & 8) != 0 && BYTE1(v17->Timer) >= 4u )
    WPP_SF_qdq(v17->AttachedDevice, 61LL, 4294967103LL, a1, ByteOffset.LowPart, v2);
  CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart = ByteOffset.QuadPart + 1;
  RaidUnitProcessBusyRequest(a1, a2, v6);
  return 0;
}
