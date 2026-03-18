/*
 * XREFs of WmipIoControl @ 0x1404A915C
 * Callers:
 *     <none>
 * Callees:
 *     IoIs32bitProcess @ 0x140019F50 (IoIs32bitProcess.c)
 *     IofCompleteRequest @ 0x140048F70 (IofCompleteRequest.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     WmipReceiveNotifications @ 0x140074DAC (WmipReceiveNotifications.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ObOpenObjectByPointer @ 0x140434390 (ObOpenObjectByPointer.c)
 *     WmipOpenBlock @ 0x1404A9494 (WmipOpenBlock.c)
 *     WmipProbeWmiOpenGuidBlock @ 0x1404AB210 (WmipProbeWmiOpenGuidBlock.c)
 *     WmipEnumerateMofResources @ 0x1404AC0B4 (WmipEnumerateMofResources.c)
 *     WmipQueryAllData @ 0x1404D1CC0 (WmipQueryAllData.c)
 *     WmipQueryGuidInfo @ 0x14055B92C (WmipQueryGuidInfo.c)
 *     WmipQuerySetExecuteSI @ 0x14057AD90 (WmipQuerySetExecuteSI.c)
 *     WmipProbeWnodeSingleInstance @ 0x140581674 (WmipProbeWnodeSingleInstance.c)
 *     WmipEnumerateGuids @ 0x1406E0654 (WmipEnumerateGuids.c)
 *     WmipQueryAllDataMultiple @ 0x1406E0ABC (WmipQueryAllDataMultiple.c)
 *     WmipQuerySingleMultiple @ 0x1406E0D78 (WmipQuerySingleMultiple.c)
 *     WmipProbeWnodeMethodItem @ 0x1406E1254 (WmipProbeWnodeMethodItem.c)
 *     WmipProbeWnodeSingleItem @ 0x1406E12C0 (WmipProbeWnodeSingleItem.c)
 *     WmipTranslateFileHandle @ 0x1406E1328 (WmipTranslateFileHandle.c)
 */

__int64 __fastcall WmipIoControl(__int64 a1, IRP *a2, __int64 a3, __int64 a4)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v5; // r15d
  struct _IRP *MasterIrp; // rdi
  unsigned int Length; // esi
  unsigned int LowPart; // r12d
  __int64 Options; // r14
  int Blink_high; // eax
  NTSTATUS AllDataMultiple; // eax
  NTSTATUS v13; // ebx
  int v15; // edx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // edx
  __int64 v19; // r8
  __int64 v20; // r9
  ACCESS_MASK DesiredAccess[2]; // [rsp+58h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-A0h] BYREF
  char v24; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v25[56]; // [rsp+80h] [rbp-88h] BYREF
  char v26; // [rsp+B8h] [rbp-50h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = 0;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Length = CurrentStackLocation->Parameters.Read.Length;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Options = CurrentStackLocation->Parameters.Create.Options;
  DesiredAccess[0] = Length;
  if ( LowPart > 0x224158 )
  {
    switch ( LowPart )
    {
      case 0x224160u:
        goto LABEL_79;
      case 0x228008u:
        v13 = WmipProbeWnodeSingleInstance(MasterIrp, (unsigned int)Options, Length, 0LL);
        if ( v13 < 0 )
          goto LABEL_12;
        LOBYTE(v20) = 2;
        break;
      case 0x22800Cu:
        v13 = WmipProbeWnodeSingleItem(MasterIrp, (unsigned int)Options);
        if ( v13 < 0 )
          goto LABEL_12;
        LOBYTE(v20) = 3;
        break;
      default:
        switch ( LowPart )
        {
          case 0x228024u:
            v13 = WmipProbeWnodeMethodItem(MasterIrp, (unsigned int)Options, Length);
            if ( v13 < 0 )
              goto LABEL_12;
            LOBYTE(v17) = 9;
            LOBYTE(v16) = 1;
            goto LABEL_49;
          case 0x22811Cu:
            if ( (_DWORD)Options == 22 )
            {
              AllDataMultiple = WmipTranslateFileHandle(MasterIrp, DesiredAccess);
              goto LABEL_10;
            }
LABEL_71:
            v13 = -1073741823;
            goto LABEL_14;
          case 0x22812Cu:
            if ( Length >= 0x38
              && &MasterIrp->Size + 1 <= (USHORT *)((char *)MasterIrp + Options)
              && (unsigned int)(*(_DWORD *)&MasterIrp->Type - 1) <= 0xFFE
              && &MasterIrp->Flags + 2 * (unsigned int)(*(_DWORD *)&MasterIrp->Type - 1) <= (ULONG *)((char *)MasterIrp + Options) )
            {
              LOBYTE(a4) = 1;
              AllDataMultiple = WmipQueryAllDataMultiple(
                                  0,
                                  0,
                                  (int)a2,
                                  a4,
                                  MasterIrp,
                                  Length,
                                  (__int64)MasterIrp,
                                  (__int64)DesiredAccess);
              goto LABEL_10;
            }
            break;
          case 0x228130u:
            if ( Length >= 0x38 && &MasterIrp->Size + 1 <= (USHORT *)((char *)MasterIrp + Options) )
            {
              v18 = *(_DWORD *)&MasterIrp->Type;
              if ( (unsigned int)(*(_DWORD *)&MasterIrp->Type - 1) <= 0xFFE
                && (char *)&MasterIrp->ThreadListEntry + 16 * (v18 - 1) + 8 * (unsigned int)(v18 - 1) <= (char *)MasterIrp + Options )
              {
                LOBYTE(v18) = 1;
                AllDataMultiple = WmipQuerySingleMultiple(
                                    (_DWORD)a2,
                                    v18,
                                    (_DWORD)MasterIrp,
                                    Length,
                                    (__int64)MasterIrp,
                                    *(_DWORD *)&MasterIrp->Type,
                                    0LL,
                                    0LL,
                                    (__int64)DesiredAccess);
                goto LABEL_10;
              }
            }
            break;
          case 0x228144u:
            if ( (unsigned int)Options < 0x10
              || Length < 0x38
              || *(_DWORD *)&MasterIrp->Type > (unsigned int)(Options - 8) >> 3 )
            {
              v13 = -1073741808;
              goto LABEL_12;
            }
            AllDataMultiple = WmipReceiveNotifications((unsigned int *)MasterIrp, DesiredAccess, (__int64)a2);
            goto LABEL_10;
          default:
            goto LABEL_56;
        }
LABEL_68:
        v13 = -1073741811;
        goto LABEL_12;
    }
    DesiredAccess[0] = Options;
    LOBYTE(v19) = 1;
    AllDataMultiple = WmipQuerySetExecuteSI(0LL, a2, v19, v20, MasterIrp, Options, DesiredAccess);
    Length = 0;
    goto LABEL_11;
  }
  switch ( LowPart )
  {
    case 0x224158u:
      if ( Length >= 0x10 )
      {
        AllDataMultiple = WmipEnumerateMofResources(MasterIrp, Length, DesiredAccess);
        goto LABEL_10;
      }
      goto LABEL_68;
    case 0x224000u:
      if ( Length >= 0x48 )
      {
        if ( (unsigned int)Options >= 0x30 )
        {
          Blink_high = HIDWORD(MasterIrp->ThreadListEntry.Blink);
          if ( (Blink_high & 1) != 0 && (_DWORD)Options == *(_DWORD *)&MasterIrp->Type && (Blink_high & 0xFFFFFF7E) == 0 )
          {
            LOBYTE(a3) = 1;
            AllDataMultiple = WmipQueryAllData(0LL, a2, a3, MasterIrp, Length, DesiredAccess);
LABEL_10:
            Length = DesiredAccess[0];
LABEL_11:
            v13 = AllDataMultiple;
            goto LABEL_12;
          }
        }
        goto LABEL_71;
      }
      goto LABEL_53;
    case 0x224004u:
      if ( Length < 0x38 )
        goto LABEL_53;
      LOBYTE(a4) = 1;
      v13 = WmipProbeWnodeSingleInstance(MasterIrp, (unsigned int)Options, Length, a4);
      if ( v13 < 0 )
        goto LABEL_12;
      LOBYTE(v17) = 1;
      LOBYTE(v16) = 1;
LABEL_49:
      DesiredAccess[0] = Options;
      AllDataMultiple = WmipQuerySetExecuteSI(0LL, a2, v16, v17, MasterIrp, Length, DesiredAccess);
      goto LABEL_10;
    case 0x224108u:
      goto LABEL_24;
    case 0x224124u:
      if ( Length >= 4 )
      {
        *(_DWORD *)&MasterIrp->Type = 1;
        Length = 4;
        v13 = 0;
        goto LABEL_14;
      }
      goto LABEL_53;
    case 0x224134u:
LABEL_79:
      if ( Length >= 8 )
      {
        AllDataMultiple = WmipEnumerateGuids(LowPart, MasterIrp, Length, DesiredAccess);
        goto LABEL_10;
      }
      goto LABEL_53;
  }
  if ( LowPart != 2244920 )
  {
    if ( LowPart != 2244924 && LowPart != 2244928 )
    {
LABEL_56:
      v13 = -1073741808;
      goto LABEL_14;
    }
LABEL_24:
    v13 = WmipProbeWmiOpenGuidBlock(
            (unsigned int)v25,
            (unsigned int)&v24,
            (unsigned int)&v26,
            (unsigned int)DesiredAccess,
            (__int64)MasterIrp,
            Options,
            Length);
    if ( v13 >= 0 )
    {
      LOBYTE(v15) = 1;
      v13 = WmipOpenBlock(LowPart, v15, (unsigned int)v25, DesiredAccess[0], (__int64)&Object);
      if ( v13 >= 0 )
      {
        v13 = ObOpenObjectByPointer(Object, 0, 0LL, DesiredAccess[0], WmipGuidObjectType, 1, &Handle);
        if ( v13 >= 0 )
        {
          if ( IoIs32bitProcess(0LL) )
            LODWORD(MasterIrp->MdlAddress) = (_DWORD)Handle;
          else
            *(_QWORD *)&MasterIrp->Flags = Handle;
        }
        ObfDereferenceObject(Object);
      }
    }
LABEL_12:
    if ( v13 == 259 || v13 == -1073741536 )
      return (unsigned int)v13;
    goto LABEL_14;
  }
  if ( Length >= 0x10 )
  {
    AllDataMultiple = WmipQueryGuidInfo(MasterIrp);
    Length = 16;
    goto LABEL_11;
  }
LABEL_53:
  v13 = -1073741789;
LABEL_14:
  a2->IoStatus.Status = v13;
  if ( v13 >= 0 )
    v5 = Length;
  a2->IoStatus.Information = v5;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v13;
}
