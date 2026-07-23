/*
 * XREFs of IopGraftName @ 0x140541568
 * Callers:
 *     IopParseDevice @ 0x14043F7C0 (IopParseDevice.c)
 * Callees:
 *     IopSymlinkGetECP @ 0x14007A020 (IopSymlinkGetECP.c)
 *     IopSymlinkRemoveECP @ 0x14007A034 (IopSymlinkRemoveECP.c)
 *     IopGetFileObjectExtension @ 0x14007B5A0 (IopGetFileObjectExtension.c)
 *     IopSymlinkGetMostRecentlyUsedName @ 0x14012F2D8 (IopSymlinkGetMostRecentlyUsedName.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140413F90 (FsRtlFreeExtraCreateParameter.c)
 *     ObQueryNameStringMode @ 0x140433A60 (ObQueryNameStringMode.c)
 *     IoGetIrpExtraCreateParameter @ 0x14046A400 (IoGetIrpExtraCreateParameter.c)
 *     IopGetFileInformation @ 0x1404ECF60 (IopGetFileInformation.c)
 *     IopSymlinkRememberJunction @ 0x140541010 (IopSymlinkRememberJunction.c)
 *     IopSymlinkUpdateECP @ 0x140541110 (IopSymlinkUpdateECP.c)
 *     IopSymlinkInitializeSymlinkInfo @ 0x140541420 (IopSymlinkInitializeSymlinkInfo.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1405414C4 (IopSymlinkAllocateAndAddECP.c)
 *     IopSymlinkGetRelatedMountPoint @ 0x140541BCC (IopSymlinkGetRelatedMountPoint.c)
 *     IopCopyOverNewPathSecure @ 0x140624A48 (IopCopyOverNewPathSecure.c)
 *     IopSymlinkApplyToOpenedName @ 0x140624E60 (IopSymlinkApplyToOpenedName.c)
 */

void __fastcall IopGraftName(PIRP Irp, __int64 a2, int *a3)
{
  PIRP v3; // rsi
  unsigned int v4; // edi
  struct _IRP *v5; // r12
  struct _IRP *v6; // r13
  int IrpExtraCreateParameter; // ebx
  UNICODE_STRING *v9; // r15
  ULONG_PTR Information; // rax
  int v11; // eax
  __int16 v12; // r11
  __int64 RelatedMountPoint; // rax
  char v14; // r8
  __int64 v15; // r10
  unsigned __int16 v16; // r11
  unsigned int v17; // r9d
  __int64 v18; // rax
  ULONG v19; // esi
  unsigned int v20; // r15d
  const void **PoolWithTag; // rax
  const void **v22; // rdi
  int v23; // eax
  struct _IRP *v24; // rax
  int FileInformation; // eax
  unsigned int v26; // ecx
  unsigned int v27; // r13d
  struct _IRP *v28; // rax
  unsigned int v29; // r13d
  const void **v30; // rbx
  struct _IRP *v31; // rdi
  char *v32; // rbx
  char *v33; // rdi
  unsigned __int16 v34; // di
  PVOID v35; // rsi
  unsigned int v36; // r15d
  __int16 v37; // dx
  __int64 MostRecentlyUsedName; // rax
  int updated; // eax
  struct _IRP *v40; // rcx
  struct _FILE_OBJECT *Object; // [rsp+50h] [rbp-39h]
  PVOID EcpContext; // [rsp+58h] [rbp-31h] BYREF
  __int64 v43; // [rsp+60h] [rbp-29h] BYREF
  const void **v44; // [rsp+68h] [rbp-21h]
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+70h] [rbp-19h] BYREF
  const void **v46; // [rsp+78h] [rbp-11h]
  __int64 v47; // [rsp+80h] [rbp-9h]
  struct _IRP *v48; // [rsp+88h] [rbp-1h]
  struct _IRP *v49; // [rsp+90h] [rbp+7h]
  unsigned __int16 *v50; // [rsp+98h] [rbp+Fh]
  char v53; // [rsp+100h] [rbp+77h]
  PVOID v54; // [rsp+108h] [rbp+7Fh] BYREF

  v3 = Irp;
  Object = *(struct _FILE_OBJECT **)(a2 + 64);
  v4 = 0;
  LOWORD(v54) = 0;
  v5 = 0LL;
  v47 = 0LL;
  EcpContext = 0LL;
  v53 = 0;
  v6 = 0LL;
  v49 = 0LL;
  v44 = 0LL;
  v46 = 0LL;
  v48 = 0LL;
  ExtraCreateParameter = 0LL;
  IrpExtraCreateParameter = IoGetIrpExtraCreateParameter(Irp, &ExtraCreateParameter);
  IopSymlinkGetECP(ExtraCreateParameter, &EcpContext);
  v9 = (UNICODE_STRING *)EcpContext;
  *((_WORD *)EcpContext + 1) |= 2u;
  Information = v3->IoStatus.Information;
  if ( v3->IoStatus.Status != 260 )
    IrpExtraCreateParameter = -1073741192;
  if ( Information != 2684354563 && Information != 2684354572 && Information != 2147483673 )
    IrpExtraCreateParameter = -1073741192;
  if ( !v3->Tail.Overlay.AuxiliaryBuffer )
    IrpExtraCreateParameter = -1073741192;
  if ( !a3 )
    IrpExtraCreateParameter = -1073741192;
  if ( *((_WORD *)a3 + 3) >= 0x4000u )
    IrpExtraCreateParameter = -1073741192;
  v11 = *a3;
  if ( *((_WORD *)a3 + 2) >= 0x4000u )
    IrpExtraCreateParameter = -1073741192;
  if ( v11 != -1610612733 && v11 != -1610612724 && v11 != -2147483623 )
    IrpExtraCreateParameter = -1073741192;
  v50 = (unsigned __int16 *)(a2 + 88);
  if ( !*(_WORD *)(a2 + 88) )
    IrpExtraCreateParameter = -1073741192;
  if ( IrpExtraCreateParameter < 0 )
    goto LABEL_56;
  if ( v11 == -1610612733 )
  {
    v12 = *((_WORD *)a3 + 5);
    v47 = (__int64)a3 + *((unsigned __int16 *)a3 + 4) + 16;
    LOWORD(v54) = v12;
  }
  else if ( v11 == -1610612724 )
  {
    v18 = (__int64)a3 + *((unsigned __int16 *)a3 + 4) + 20;
    LOWORD(v54) = *((_WORD *)a3 + 5);
    v47 = v18;
    if ( (a3[4] & 1) != 0 )
    {
      v53 = 1;
      v19 = 256;
      v20 = 256;
      if ( Object )
      {
        if ( IopGetFileObjectExtension((__int64)Object, 5, 0LL) )
        {
          v9 = (UNICODE_STRING *)EcpContext;
          v3 = Irp;
        }
        else
        {
          while ( 1 )
          {
            PoolWithTag = (const void **)ExAllocatePoolWithTag(PagedPool, v20, 0x63466F49u);
            v44 = PoolWithTag;
            v22 = PoolWithTag;
            v46 = PoolWithTag;
            if ( !PoolWithTag )
            {
              IrpExtraCreateParameter = -1073741670;
              goto LABEL_55;
            }
            memset(PoolWithTag, 0, v20);
            v23 = ObQueryNameStringMode(*(char **)(a2 + 8), (__int64)v22, v20, &v43, 0);
            IrpExtraCreateParameter = v23;
            if ( v23 >= 0 )
              break;
            if ( v23 != -2147483643 )
              goto LABEL_41;
            v20 = v43;
            if ( (unsigned int)v43 >= 0xFFFF )
            {
              IrpExtraCreateParameter = -1073741562;
LABEL_41:
              if ( IrpExtraCreateParameter < 0 )
                goto LABEL_93;
              break;
            }
            ExFreePoolWithTag(v22, 0);
          }
          v4 = *v50 + *(unsigned __int16 *)v22 - *((unsigned __int16 *)a3 + 3);
          while ( 1 )
          {
            v24 = (struct _IRP *)ExAllocatePoolWithTag(PagedPool, v19, 0x63466F49u);
            v49 = v24;
            v6 = v24;
            if ( !v24 )
            {
              IrpExtraCreateParameter = -1073741670;
              goto LABEL_92;
            }
            v48 = v24;
            memset(v24, 0, v19);
            FileInformation = IopGetFileInformation(Object, v19, 9u, v6, &v43);
            IrpExtraCreateParameter = FileInformation;
            if ( FileInformation >= 0 )
              break;
            if ( FileInformation != -2147483643 )
            {
              v9 = (UNICODE_STRING *)EcpContext;
              v3 = Irp;
              goto LABEL_24;
            }
            v19 = *(_DWORD *)&v6->Type + 8;
            if ( v19 >= 0xFFFF )
            {
              IrpExtraCreateParameter = -1073741562;
              goto LABEL_92;
            }
            ExFreePoolWithTag(v6, 0);
          }
          v26 = v4 + *(_DWORD *)&v6->Type;
          if ( v26 < v4 )
          {
            IrpExtraCreateParameter = -1073741675;
            goto LABEL_92;
          }
          v9 = (UNICODE_STRING *)EcpContext;
          v4 += *(_DWORD *)&v6->Type;
          v3 = Irp;
          if ( v26 >= 0xFFFF )
            IrpExtraCreateParameter = -1073741562;
        }
      }
      else
      {
        v9 = (UNICODE_STRING *)EcpContext;
        v3 = Irp;
      }
    }
  }
  else
  {
    IrpExtraCreateParameter = -1073741194;
  }
LABEL_24:
  if ( IrpExtraCreateParameter >= 0 )
  {
    RelatedMountPoint = IopSymlinkGetRelatedMountPoint(v9, *((unsigned __int16 *)a3 + 3));
    if ( !RelatedMountPoint )
      RelatedMountPoint = IopSymlinkGetMostRecentlyUsedName((__int64)v9);
    v17 = *(unsigned __int16 *)(RelatedMountPoint + 16);
    if ( v14 )
    {
      if ( !v15 || IopGetFileObjectExtension(v15, 5, 0LL) )
      {
        if ( v4 <= v17 )
          v4 = v17;
      }
      else
      {
        v4 += v17;
      }
      v4 += 2;
    }
    v27 = v4 + v16 + *((unsigned __int16 *)a3 + 3) + 4;
    if ( v27 >= 0xFFFF )
    {
      IrpExtraCreateParameter = -1073741562;
    }
    else
    {
      v28 = (struct _IRP *)ExAllocatePoolWithTag(PagedPool, v27, 0x63466F49u);
      v5 = v28;
      if ( v28 )
        memset(v28, 0, v27);
      else
        IrpExtraCreateParameter = -1073741670;
    }
    v29 = v27 - 2;
    if ( IrpExtraCreateParameter >= 0 )
    {
      if ( v53 )
      {
        v54 = 0LL;
        if ( Object && !IopGetFileObjectExtension((__int64)Object, 5, 0LL) )
        {
          v30 = v46;
          memmove(v5, v46[1], *(unsigned __int16 *)v46);
          v31 = v48;
          v32 = (char *)(&v5->Type + ((unsigned __int64)*(unsigned __int16 *)v30 >> 1));
          memmove(v32, &v48->Size + 1, *(unsigned int *)&v48->Type);
          v33 = &v32[2 * ((unsigned __int64)*(unsigned int *)&v31->Type >> 1)];
          if ( **(_WORD **)(a2 + 96) != 92 && *((_WORD *)v33 - 1) != 92 )
          {
            *(_WORD *)v33 = 92;
            LOWORD(v33) = (_WORD)v33 + 2;
          }
          v34 = (_WORD)v33 - (_WORD)v5;
          IopSymlinkRemoveECP(ExtraCreateParameter, &EcpContext);
          v35 = EcpContext;
          v36 = *((unsigned __int16 *)EcpContext + 8) + 2 + v34;
          if ( v36 >= 0xFFFF )
          {
            IrpExtraCreateParameter = -1073741562;
LABEL_78:
            ExFreePoolWithTag(v5, 0);
            goto LABEL_90;
          }
          IrpExtraCreateParameter = IopSymlinkAllocateAndAddECP(Irp, &v54, v36);
          if ( IrpExtraCreateParameter < 0 )
            goto LABEL_78;
          v37 = v36 + 32;
          v9 = (UNICODE_STRING *)v54;
          IopSymlinkInitializeSymlinkInfo(
            (__int64)v54,
            v37,
            *((const void **)v35 + 3),
            *((_WORD *)v35 + 8),
            *(_WORD *)v35,
            v5,
            v34,
            *(_WORD *)v46,
            *((_WORD *)v35 + 1),
            *((_QWORD *)v35 + 1));
          FsRtlFreeExtraCreateParameter(v35);
        }
        MostRecentlyUsedName = IopSymlinkGetRelatedMountPoint(v9, *((unsigned __int16 *)a3 + 3));
        if ( !MostRecentlyUsedName )
          MostRecentlyUsedName = IopSymlinkGetMostRecentlyUsedName((__int64)v9);
        updated = IopSymlinkApplyToOpenedName(a2, MostRecentlyUsedName, a3, Irp, v5, v29);
      }
      else
      {
        IrpExtraCreateParameter = IopCopyOverNewPathSecure(v5, *((_WORD *)a3 + 3));
        if ( IrpExtraCreateParameter < 0 )
        {
          v40 = v5;
LABEL_97:
          ExFreePoolWithTag(v40, 0);
          goto LABEL_98;
        }
        if ( *a3 == -1610612733 )
        {
          IrpExtraCreateParameter = IopSymlinkRememberJunction(*((_WORD *)a3 + 3), a2, (__int64)v3, v9);
          goto LABEL_98;
        }
        updated = IopSymlinkUpdateECP(v3, v9, 0, (const UNICODE_STRING *)(a2 + 88), 0, v9->MaximumLength & 0xFFFE);
      }
      IrpExtraCreateParameter = updated;
    }
  }
LABEL_90:
  if ( v53 )
  {
    v6 = v49;
LABEL_92:
    v22 = v44;
LABEL_93:
    if ( v22 )
      ExFreePoolWithTag(v22, 0);
    if ( v6 )
    {
      v40 = v6;
      goto LABEL_97;
    }
  }
LABEL_98:
  if ( IrpExtraCreateParameter < 0 )
  {
LABEL_55:
    v3 = Irp;
LABEL_56:
    v3->IoStatus.Status = IrpExtraCreateParameter;
    return;
  }
  Irp->IoStatus.Status = 260;
}
