/*
 * XREFs of IopGraftName @ 0x1404C0FB0
 * Callers:
 *     IopParseDevice @ 0x140412F10 (IopParseDevice.c)
 * Callees:
 *     IopSymlinkGetECP @ 0x140037028 (IopSymlinkGetECP.c)
 *     IopSymlinkRemoveECP @ 0x14003703C (IopSymlinkRemoveECP.c)
 *     IopGetFileObjectExtension @ 0x14007CDA0 (IopGetFileObjectExtension.c)
 *     IopSymlinkGetMostRecentlyUsedName @ 0x1400F1694 (IopSymlinkGetMostRecentlyUsedName.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IoGetIrpExtraCreateParameter @ 0x1403F55B0 (IoGetIrpExtraCreateParameter.c)
 *     ObQueryNameStringMode @ 0x14041FE90 (ObQueryNameStringMode.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1404232E0 (FsRtlFreeExtraCreateParameter.c)
 *     IopSymlinkRememberJunction @ 0x1404C0A58 (IopSymlinkRememberJunction.c)
 *     IopSymlinkUpdateECP @ 0x1404C0B58 (IopSymlinkUpdateECP.c)
 *     IopSymlinkInitializeSymlinkInfo @ 0x1404C0E68 (IopSymlinkInitializeSymlinkInfo.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1404C0F0C (IopSymlinkAllocateAndAddECP.c)
 *     IopCopyOverNewPath @ 0x1404C15E4 (IopCopyOverNewPath.c)
 *     IopSymlinkGetRelatedMountPoint @ 0x1404C16C8 (IopSymlinkGetRelatedMountPoint.c)
 *     IopGetFileInformation @ 0x1404D8FD0 (IopGetFileInformation.c)
 *     IopSymlinkApplyToOpenedName @ 0x1405FB1FC (IopSymlinkApplyToOpenedName.c)
 */

void __fastcall IopGraftName(PIRP Irp, __int64 a2, int *a3)
{
  PIRP v3; // rsi
  unsigned int v4; // edi
  char *v5; // r13
  NTSTATUS IrpExtraCreateParameter; // ebx
  UNICODE_STRING *v9; // r15
  ULONG_PTR Information; // rax
  int v11; // eax
  bool v12; // zf
  __int16 v13; // r8
  __int64 RelatedMountPoint; // rax
  unsigned __int16 v15; // dx
  unsigned __int16 v16; // r8
  char v17; // r9
  int v18; // r11d
  unsigned int v19; // eax
  unsigned int v20; // r12d
  char *v21; // rax
  __int64 v22; // rax
  unsigned int v23; // esi
  unsigned int v24; // r12d
  const void **PoolWithTag; // rax
  const void **v26; // rdi
  int v27; // eax
  _DWORD *v28; // rax
  _DWORD *v29; // r12
  int FileInformation; // eax
  unsigned int v31; // ecx
  __int16 v32; // r12
  unsigned __int16 *v33; // rbx
  unsigned int *v34; // rdi
  char *v35; // rbx
  char *v36; // rdi
  unsigned __int16 v37; // di
  PVOID v38; // rsi
  unsigned int v39; // r15d
  __int16 v40; // dx
  void *MostRecentlyUsedName; // rax
  NTSTATUS updated; // eax
  const void **P; // [rsp+50h] [rbp-39h]
  __int64 v44; // [rsp+58h] [rbp-31h] BYREF
  PVOID EcpContext; // [rsp+60h] [rbp-29h] BYREF
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+68h] [rbp-21h] BYREF
  __int64 v47; // [rsp+70h] [rbp-19h]
  _DWORD *v48; // [rsp+78h] [rbp-11h]
  const void **v49; // [rsp+80h] [rbp-9h]
  PVOID Object; // [rsp+88h] [rbp-1h]
  unsigned int *v51; // [rsp+90h] [rbp+7h]
  const UNICODE_STRING *v52; // [rsp+98h] [rbp+Fh]
  char v55; // [rsp+100h] [rbp+77h]
  PVOID v56; // [rsp+108h] [rbp+7Fh] BYREF

  v3 = Irp;
  Object = *(PVOID *)(a2 + 64);
  v4 = 0;
  LOWORD(v56) = 0;
  v5 = 0LL;
  v47 = 0LL;
  EcpContext = 0LL;
  v55 = 0;
  v48 = 0LL;
  P = 0LL;
  v49 = 0LL;
  v51 = 0LL;
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
  v12 = *(_WORD *)(a2 + 88) == 0;
  v52 = (const UNICODE_STRING *)(a2 + 88);
  if ( v12 )
    IrpExtraCreateParameter = -1073741192;
  if ( IrpExtraCreateParameter < 0 )
    goto LABEL_59;
  if ( v11 == -1610612733 )
  {
    v13 = *((_WORD *)a3 + 5);
    v47 = (__int64)a3 + *((unsigned __int16 *)a3 + 4) + 16;
    LOWORD(v56) = v13;
  }
  else if ( v11 == -1610612724 )
  {
    v22 = (__int64)a3 + *((unsigned __int16 *)a3 + 4) + 20;
    LOWORD(v56) = *((_WORD *)a3 + 5);
    v47 = v22;
    if ( (a3[4] & 1) != 0 )
    {
      v55 = 1;
      v23 = 256;
      v24 = 256;
      if ( Object )
      {
        if ( IopGetFileObjectExtension((__int64)Object, 5, 0LL) )
        {
          v3 = Irp;
        }
        else
        {
          while ( 1 )
          {
            PoolWithTag = (const void **)ExAllocatePoolWithTag(PagedPool, v24, 0x63466F49u);
            P = PoolWithTag;
            v26 = PoolWithTag;
            v49 = PoolWithTag;
            if ( !PoolWithTag )
            {
              IrpExtraCreateParameter = -1073741670;
              goto LABEL_59;
            }
            memset(PoolWithTag, 0, v24);
            v27 = ObQueryNameStringMode(*(char **)(a2 + 8), (__int64)v26, v24, &v44, 0);
            IrpExtraCreateParameter = v27;
            if ( v27 >= 0 )
              break;
            if ( v27 != -2147483643 )
              goto LABEL_44;
            v24 = v44;
            if ( (unsigned int)v44 >= 0xFFFF )
            {
              IrpExtraCreateParameter = -1073741562;
LABEL_44:
              if ( IrpExtraCreateParameter < 0 )
              {
                v29 = 0LL;
                goto LABEL_89;
              }
              break;
            }
            ExFreePoolWithTag(v26, 0);
          }
          v4 = v52->Length + *(unsigned __int16 *)v26 - *((unsigned __int16 *)a3 + 3);
          while ( 1 )
          {
            v28 = ExAllocatePoolWithTag(PagedPool, v23, 0x63466F49u);
            v48 = v28;
            v29 = v28;
            if ( !v28 )
            {
              IrpExtraCreateParameter = -1073741670;
              goto LABEL_57;
            }
            v51 = v28;
            memset(v28, 0, v23);
            FileInformation = IopGetFileInformation(Object, (__int64)&v44);
            IrpExtraCreateParameter = FileInformation;
            if ( FileInformation >= 0 )
              break;
            if ( FileInformation != -2147483643 )
            {
              v3 = Irp;
              goto LABEL_24;
            }
            v23 = *v29 + 8;
            if ( v23 >= 0xFFFF )
            {
              IrpExtraCreateParameter = -1073741562;
              goto LABEL_57;
            }
            ExFreePoolWithTag(v29, 0);
          }
          v31 = v4 + *v29;
          if ( v31 < v4 )
          {
            IrpExtraCreateParameter = -1073741675;
            goto LABEL_57;
          }
          v3 = Irp;
          v4 += *v29;
          if ( v31 >= 0xFFFF )
            IrpExtraCreateParameter = -1073741562;
        }
      }
      else
      {
        v3 = Irp;
      }
    }
  }
  else
  {
    IrpExtraCreateParameter = -1073741194;
  }
LABEL_24:
  if ( IrpExtraCreateParameter < 0 )
    goto LABEL_86;
  RelatedMountPoint = IopSymlinkGetRelatedMountPoint(v9, *((unsigned __int16 *)a3 + 3));
  if ( !RelatedMountPoint )
    RelatedMountPoint = IopSymlinkGetMostRecentlyUsedName((__int64)v9);
  v19 = *(unsigned __int16 *)(RelatedMountPoint + 16);
  if ( v17 )
  {
    if ( v4 <= v19 )
      v4 = v19;
    v4 += v18;
  }
  v20 = v4 + v16 + v15 + 4;
  if ( v20 >= 0xFFFF )
  {
    IrpExtraCreateParameter = -1073741562;
  }
  else
  {
    v21 = (char *)ExAllocatePoolWithTag(PagedPool, v20, 0x63466F49u);
    v5 = v21;
    if ( v21 )
      memset(v21, 0, v20);
    else
      IrpExtraCreateParameter = -1073741670;
    v17 = v55;
  }
  v32 = v20 - 2;
  if ( IrpExtraCreateParameter < 0 )
    goto LABEL_86;
  if ( v17 )
  {
    v56 = 0LL;
    if ( Object && !IopGetFileObjectExtension((__int64)Object, 5, 0LL) )
    {
      v33 = (unsigned __int16 *)v49;
      memmove(v5, v49[1], *(unsigned __int16 *)v49);
      v34 = v51;
      v35 = &v5[2 * ((unsigned __int64)*v33 >> 1)];
      memmove(v35, v51 + 1, *v51);
      v36 = &v35[2 * ((unsigned __int64)*v34 >> 1)];
      if ( **(_WORD **)(a2 + 96) != 92 && *((_WORD *)v36 - 1) != 92 )
      {
        *(_WORD *)v36 = 92;
        LOWORD(v36) = (_WORD)v36 + 2;
      }
      v37 = (_WORD)v36 - (_WORD)v5;
      IopSymlinkRemoveECP(ExtraCreateParameter, &EcpContext);
      v38 = EcpContext;
      v39 = *((unsigned __int16 *)EcpContext + 8) + 2 + v37;
      if ( v39 >= 0xFFFF )
      {
        IrpExtraCreateParameter = -1073741562;
LABEL_76:
        ExFreePoolWithTag(v5, 0);
        v3 = Irp;
        goto LABEL_86;
      }
      IrpExtraCreateParameter = IopSymlinkAllocateAndAddECP(Irp, &v56, v39);
      if ( IrpExtraCreateParameter < 0 )
        goto LABEL_76;
      v40 = v39 + 32;
      v9 = (UNICODE_STRING *)v56;
      IopSymlinkInitializeSymlinkInfo(
        (__int64)v56,
        v40,
        *((const void **)v38 + 3),
        *((_WORD *)v38 + 8),
        *(_WORD *)v38,
        v5,
        v37,
        *(_WORD *)v49,
        *((_WORD *)v38 + 1),
        *((_QWORD *)v38 + 1));
      FsRtlFreeExtraCreateParameter(v38);
    }
    MostRecentlyUsedName = (void *)IopSymlinkGetRelatedMountPoint(v9, *((unsigned __int16 *)a3 + 3));
    if ( !MostRecentlyUsedName )
      MostRecentlyUsedName = (void *)IopSymlinkGetMostRecentlyUsedName((__int64)v9);
    v3 = Irp;
    updated = IopSymlinkApplyToOpenedName(a2, MostRecentlyUsedName, (int)a3, Irp, v5, v32);
  }
  else
  {
    IopCopyOverNewPath(v5, *((_WORD *)a3 + 3));
    if ( *a3 == -1610612733 )
    {
      IrpExtraCreateParameter = IopSymlinkRememberJunction(*((_WORD *)a3 + 3), a2, (__int64)v3, v9);
      goto LABEL_94;
    }
    updated = IopSymlinkUpdateECP(v3, v9, 0, v52, 0, v9->MaximumLength & 0xFFFE);
  }
  IrpExtraCreateParameter = updated;
LABEL_86:
  if ( v55 )
  {
    v29 = v48;
LABEL_57:
    v26 = P;
LABEL_89:
    if ( v26 )
      ExFreePoolWithTag(v26, 0);
    if ( v29 )
      ExFreePoolWithTag(v29, 0);
    v3 = Irp;
  }
LABEL_94:
  if ( IrpExtraCreateParameter < 0 )
  {
LABEL_59:
    Irp->IoStatus.Status = IrpExtraCreateParameter;
    return;
  }
  v3->IoStatus.Status = 260;
}
