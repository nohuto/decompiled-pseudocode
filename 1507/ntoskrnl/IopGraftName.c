/*
 * XREFs of IopGraftName @ 0x140548FF4
 * Callers:
 *     IopSymlinkProcessReparse @ 0x140548F44 (IopSymlinkProcessReparse.c)
 * Callees:
 *     IopSymlinkGetECP @ 0x140070050 (IopSymlinkGetECP.c)
 *     IopSymlinkRemoveECP @ 0x140070B34 (IopSymlinkRemoveECP.c)
 *     IopGetFileObjectExtension @ 0x1400716C0 (IopGetFileObjectExtension.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     RtlULongAdd @ 0x1401E04A8 (RtlULongAdd.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x140426100 (ObQueryNameStringMode.c)
 *     IopGetFileInformation @ 0x140428218 (IopGetFileInformation.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140476654 (FsRtlFreeExtraCreateParameter.c)
 *     IoGetIrpExtraCreateParameter @ 0x1404A5730 (IoGetIrpExtraCreateParameter.c)
 *     IopSymlinkRememberJunction @ 0x14054891C (IopSymlinkRememberJunction.c)
 *     IopSymlinkUpdateECP @ 0x140548AC0 (IopSymlinkUpdateECP.c)
 *     IopSymlinkInitializeSymlinkInfo @ 0x140548DD8 (IopSymlinkInitializeSymlinkInfo.c)
 *     IopSymlinkAllocateAndAddECP @ 0x140548E7C (IopSymlinkAllocateAndAddECP.c)
 *     IopSymlinkGetRelatedMountPoint @ 0x14054967C (IopSymlinkGetRelatedMountPoint.c)
 *     IopCopyOverNewPathSecure @ 0x140675354 (IopCopyOverNewPathSecure.c)
 *     IopSymlinkApplyToOpenedName @ 0x140675754 (IopSymlinkApplyToOpenedName.c)
 */

void __fastcall IopGraftName(PIRP Irp, __int64 a2, int *a3)
{
  PIRP v3; // rsi
  ULONG v4; // edi
  struct _IRP *v5; // r13
  int IrpExtraCreateParameter; // ebx
  UNICODE_STRING *v9; // r15
  ULONG_PTR Information; // rax
  char v11; // r9
  int v12; // eax
  bool v13; // zf
  __int16 v14; // r11
  __int64 RelatedMountPoint; // rax
  char v16; // r8
  __int64 v17; // r10
  unsigned __int16 v18; // r11
  ULONG Length; // r9d
  __int64 v20; // rax
  ULONG v21; // esi
  unsigned int v22; // r12d
  unsigned __int16 *PoolWithTag; // rax
  unsigned __int16 *v24; // rdi
  int v25; // eax
  struct _IRP *v26; // rax
  struct _IRP *v27; // r12
  int FileInformation; // eax
  wchar_t *Buffer; // rax
  UNICODE_STRING *v30; // rcx
  unsigned int v31; // r12d
  struct _IRP *v32; // rax
  __int16 v33; // r12
  const void **v34; // rbx
  struct _IRP *v35; // rdi
  char *v36; // rbx
  char *v37; // rdi
  unsigned __int16 v38; // di
  PVOID v39; // rsi
  unsigned int v40; // r15d
  __int16 v41; // dx
  UNICODE_STRING *v42; // rax
  wchar_t *v43; // rcx
  int updated; // eax
  struct _IRP *v45; // rcx
  struct _FILE_OBJECT *Object; // [rsp+50h] [rbp-39h]
  __int64 v47; // [rsp+58h] [rbp-31h] BYREF
  PVOID P; // [rsp+60h] [rbp-29h]
  PVOID EcpContext; // [rsp+68h] [rbp-21h] BYREF
  ULONG pulResult[2]; // [rsp+70h] [rbp-19h] BYREF
  const void **v51; // [rsp+78h] [rbp-11h]
  __int64 v52; // [rsp+80h] [rbp-9h]
  struct _IRP *v53; // [rsp+88h] [rbp-1h]
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+90h] [rbp+7h] BYREF
  struct _IRP *v55; // [rsp+98h] [rbp+Fh]
  char v58; // [rsp+100h] [rbp+77h]
  PVOID v59; // [rsp+108h] [rbp+7Fh] BYREF

  v3 = Irp;
  Object = *(struct _FILE_OBJECT **)(a2 + 64);
  v4 = 0;
  LOWORD(v59) = 0;
  v5 = 0LL;
  v52 = 0LL;
  EcpContext = 0LL;
  v58 = 0;
  v53 = 0LL;
  P = 0LL;
  v51 = 0LL;
  v55 = 0LL;
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
  v11 = 0;
  if ( !v3->Tail.Overlay.AuxiliaryBuffer )
    IrpExtraCreateParameter = -1073741192;
  if ( !a3 )
    IrpExtraCreateParameter = -1073741192;
  if ( *((_WORD *)a3 + 3) >= 0x4000u )
    IrpExtraCreateParameter = -1073741192;
  v12 = *a3;
  if ( *((_WORD *)a3 + 2) >= 0x4000u )
    IrpExtraCreateParameter = -1073741192;
  if ( v12 != -1610612733 && v12 != -1610612724 && v12 != -2147483623 )
    IrpExtraCreateParameter = -1073741192;
  v13 = *(_WORD *)(a2 + 88) == 0;
  *(_QWORD *)pulResult = a2 + 88;
  if ( v13 )
    IrpExtraCreateParameter = -1073741192;
  if ( IrpExtraCreateParameter < 0 )
    goto LABEL_53;
  if ( v12 == -1610612733 )
  {
    v14 = *((_WORD *)a3 + 5);
    v52 = (__int64)a3 + *((unsigned __int16 *)a3 + 4) + 16;
    LOWORD(v59) = v14;
  }
  else if ( v12 == -1610612724 )
  {
    v20 = (__int64)a3 + *((unsigned __int16 *)a3 + 4) + 20;
    LOWORD(v59) = *((_WORD *)a3 + 5);
    v52 = v20;
    if ( (a3[4] & 1) != 0 )
    {
      v58 = 1;
      v21 = 256;
      v22 = 256;
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
            PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, v22, 0x63466F49u);
            P = PoolWithTag;
            v24 = PoolWithTag;
            v51 = (const void **)PoolWithTag;
            if ( !PoolWithTag )
            {
              IrpExtraCreateParameter = -1073741670;
              goto LABEL_52;
            }
            memset(PoolWithTag, 0, v22);
            v25 = ObQueryNameStringMode(*(char **)(a2 + 8), (__int64)v24, v22, &v47, 0);
            IrpExtraCreateParameter = v25;
            if ( v25 >= 0 )
              break;
            if ( v25 != -2147483643 )
              goto LABEL_37;
            v22 = v47;
            if ( (unsigned int)v47 >= 0xFFFF )
            {
              IrpExtraCreateParameter = -1073741562;
LABEL_37:
              if ( IrpExtraCreateParameter < 0 )
              {
                v27 = 0LL;
                goto LABEL_102;
              }
              break;
            }
            ExFreePoolWithTag(v24, 0);
          }
          v4 = (unsigned __int16)**(_WORD **)pulResult + *v24 - *((unsigned __int16 *)a3 + 3);
          pulResult[0] = v4;
          while ( 1 )
          {
            v26 = (struct _IRP *)ExAllocatePoolWithTag(PagedPool, v21, 0x63466F49u);
            v53 = v26;
            v27 = v26;
            if ( !v26 )
            {
              IrpExtraCreateParameter = -1073741670;
              goto LABEL_50;
            }
            v55 = v26;
            memset(v26, 0, v21);
            FileInformation = IopGetFileInformation(Object, v21, 9u, v27, &v47);
            v11 = 0;
            IrpExtraCreateParameter = FileInformation;
            if ( FileInformation >= 0 )
              break;
            if ( FileInformation != -2147483643 )
            {
              v3 = Irp;
              goto LABEL_24;
            }
            v21 = *(_DWORD *)&v27->Type + 8;
            if ( v21 >= 0xFFFF )
            {
              IrpExtraCreateParameter = -1073741562;
              goto LABEL_50;
            }
            ExFreePoolWithTag(v27, 0);
          }
          if ( RtlULongAdd(v4, *(_DWORD *)&v27->Type, pulResult) < 0 )
          {
            IrpExtraCreateParameter = -1073741675;
            goto LABEL_50;
          }
          v4 = pulResult[0];
          v3 = Irp;
          if ( pulResult[0] >= 0xFFFF )
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
    goto LABEL_99;
  RelatedMountPoint = IopSymlinkGetRelatedMountPoint(v9, *((unsigned __int16 *)a3 + 3));
  if ( RelatedMountPoint )
  {
    Length = *(unsigned __int16 *)(RelatedMountPoint + 16);
  }
  else
  {
    Buffer = v9->Buffer;
    v30 = v9;
    while ( Buffer )
    {
      v30 = (UNICODE_STRING *)Buffer;
      Buffer = (wchar_t *)*((_QWORD *)Buffer + 1);
    }
    Length = v30[1].Length;
  }
  if ( v16 )
  {
    if ( !v17 || IopGetFileObjectExtension(v17, 5, 0LL) )
    {
      if ( v4 <= Length )
        v4 = Length;
    }
    else
    {
      v4 += Length;
    }
    v4 += 2;
  }
  v31 = v4 + v18 + *((unsigned __int16 *)a3 + 3) + 4;
  if ( v31 >= 0xFFFF )
  {
    IrpExtraCreateParameter = -1073741562;
  }
  else
  {
    v32 = (struct _IRP *)ExAllocatePoolWithTag(PagedPool, v31, 0x63466F49u);
    v11 = 0;
    v5 = v32;
    if ( !v32 )
    {
      IrpExtraCreateParameter = -1073741670;
      goto LABEL_75;
    }
    memset(v32, 0, v31);
  }
  v11 = 0;
LABEL_75:
  v33 = v31 - 2;
  if ( IrpExtraCreateParameter >= 0 )
  {
    if ( v58 )
    {
      v59 = 0LL;
      if ( Object && !IopGetFileObjectExtension((__int64)Object, 5, 0LL) )
      {
        v34 = v51;
        memmove(v5, v51[1], *(unsigned __int16 *)v51);
        v35 = v55;
        v36 = (char *)(&v5->Type + ((unsigned __int64)*(unsigned __int16 *)v34 >> 1));
        memmove(v36, &v55->Size + 1, *(unsigned int *)&v55->Type);
        v37 = &v36[2 * ((unsigned __int64)*(unsigned int *)&v35->Type >> 1)];
        if ( **(_WORD **)(a2 + 96) != 92 && *((_WORD *)v37 - 1) != 92 )
        {
          *(_WORD *)v37 = 92;
          LOWORD(v37) = (_WORD)v37 + 2;
        }
        v38 = (_WORD)v37 - (_WORD)v5;
        IopSymlinkRemoveECP(ExtraCreateParameter, &EcpContext);
        v39 = EcpContext;
        v40 = v38 + *((unsigned __int16 *)EcpContext + 8) + 2;
        if ( v40 >= 0xFFFF )
        {
          IrpExtraCreateParameter = -1073741562;
LABEL_84:
          ExFreePoolWithTag(v5, 0);
LABEL_98:
          v11 = 0;
          goto LABEL_99;
        }
        IrpExtraCreateParameter = IopSymlinkAllocateAndAddECP(Irp, &v59, v38 + *((_WORD *)EcpContext + 8) + 2);
        if ( IrpExtraCreateParameter < 0 )
          goto LABEL_84;
        v41 = v40 + 32;
        v9 = (UNICODE_STRING *)v59;
        IopSymlinkInitializeSymlinkInfo(
          (__int64)v59,
          v41,
          *((const void **)v39 + 3),
          *((_WORD *)v39 + 8),
          *(_WORD *)v39,
          v5,
          v38,
          *(_WORD *)v51,
          *((_WORD *)v39 + 1),
          *((_QWORD *)v39 + 1));
        FsRtlFreeExtraCreateParameter(v39);
      }
      v42 = (UNICODE_STRING *)IopSymlinkGetRelatedMountPoint(v9, *((unsigned __int16 *)a3 + 3));
      if ( !v42 )
      {
        v43 = v9->Buffer;
        v42 = v9;
        while ( v43 )
        {
          v42 = (UNICODE_STRING *)v43;
          v43 = (wchar_t *)*((_QWORD *)v43 + 1);
        }
      }
      updated = IopSymlinkApplyToOpenedName(a2, v42, (int)a3, Irp, v5, v33);
    }
    else
    {
      IrpExtraCreateParameter = IopCopyOverNewPathSecure(v5, *((_WORD *)a3 + 3));
      if ( IrpExtraCreateParameter < 0 )
      {
        v45 = v5;
LABEL_106:
        ExFreePoolWithTag(v45, 0);
        goto LABEL_107;
      }
      if ( *a3 == -1610612733 )
      {
        IrpExtraCreateParameter = IopSymlinkRememberJunction(*((_WORD *)a3 + 3), a2, (__int64)v3, v9);
        goto LABEL_107;
      }
      updated = IopSymlinkUpdateECP(v3, v9, 0, (const UNICODE_STRING *)(a2 + 88), 0, v9->MaximumLength & 0xFFFE);
    }
    IrpExtraCreateParameter = updated;
    goto LABEL_98;
  }
LABEL_99:
  if ( v58 != v11 )
  {
    v27 = v53;
LABEL_50:
    v24 = (unsigned __int16 *)P;
LABEL_102:
    if ( v24 )
      ExFreePoolWithTag(v24, 0);
    if ( v27 )
    {
      v45 = v27;
      goto LABEL_106;
    }
  }
LABEL_107:
  if ( IrpExtraCreateParameter < 0 )
  {
LABEL_52:
    v3 = Irp;
LABEL_53:
    v3->IoStatus.Status = IrpExtraCreateParameter;
    return;
  }
  Irp->IoStatus.Status = 260;
}
