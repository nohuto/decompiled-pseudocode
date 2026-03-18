/*
 * XREFs of IoWMISystemControl @ 0x14052D8A8
 * Callers:
 *     WmipSystemControl @ 0x14052D89C (WmipSystemControl.c)
 * Callees:
 *     IofCompleteRequest @ 0x140048F70 (IofCompleteRequest.c)
 *     WmipFindRegEntryByProviderId @ 0x1400CF03C (WmipFindRegEntryByProviderId.c)
 *     WmipUnreferenceRegEntry @ 0x1400CF108 (WmipUnreferenceRegEntry.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     WmipQueryWmiDataBlock @ 0x14052DCE0 (WmipQueryWmiDataBlock.c)
 *     WmipFindGuid @ 0x14052DDD0 (WmipFindGuid.c)
 *     IoWMICompleteRequest @ 0x14052DE2C (IoWMICompleteRequest.c)
 *     WmipQueryWmiRegInfo @ 0x1405C2B14 (WmipQueryWmiRegInfo.c)
 */

__int64 __fastcall IoWMISystemControl(__int64 a1, __int64 a2, IRP *a3)
{
  __int64 p_OutboundQuota; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  __int64 v6; // r10
  unsigned int v7; // r12d
  int v8; // esi
  UCHAR MinorFunction; // r15
  PNAMED_PIPE_CREATE_PARAMETERS Parameters; // r14
  unsigned int LowPart; // r13d
  unsigned int v12; // ebx
  __int64 v14; // rcx
  unsigned int v15; // esi
  __int64 RegEntryByProviderId; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r15
  __int64 v21; // rax
  __int64 v22; // r15
  unsigned int v23; // eax
  char *v24; // rcx
  int v25; // r13d
  unsigned int v26; // r15d
  int v27; // eax
  void *v28; // rcx
  int v29; // edx
  __int16 v30; // r10
  int v31; // eax
  __int64 v32; // r11
  _WORD *v33; // r8
  unsigned int v34; // r12d
  unsigned int v35; // r9d
  __int64 *v36; // r9
  __int64 *p_CompletionMode; // rcx
  __int64 v38; // r13
  _DWORD *v39; // r9
  int v40; // eax
  int v41; // eax
  _WORD *v42; // rcx
  __int64 v43; // [rsp+40h] [rbp-28h] BYREF
  void *Src; // [rsp+48h] [rbp-20h]
  _QWORD v45[3]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v46; // [rsp+B0h] [rbp+48h] BYREF
  __int64 v47; // [rsp+B8h] [rbp+50h]
  unsigned __int16 *v48; // [rsp+C0h] [rbp+58h] BYREF
  __int64 *v49; // [rsp+C8h] [rbp+60h]

  v47 = a2;
  v46 = a1;
  p_OutboundQuota = 0LL;
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v6 = a2;
  LODWORD(v46) = 0;
  v7 = 0;
  LODWORD(v48) = 0;
  v8 = 0;
  LODWORD(v49) = 0;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction > 0xBu
    || CurrentStackLocation->Parameters.WMI.ProviderId != a2
    || MinorFunction != 8 && MinorFunction != 11 && !WmipGuidList )
  {
    v15 = -1073741808;
    goto LABEL_79;
  }
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( MinorFunction != 8 && MinorFunction != 11 )
  {
    if ( !(unsigned __int8)WmipFindGuid(
                             (unsigned int)WmipGuidList,
                             7,
                             CurrentStackLocation->Parameters.QueryDirectory.FileName,
                             (unsigned int)&v46,
                             (__int64)&v48) )
    {
      v12 = -1073741163;
LABEL_14:
      a3->IoStatus.Status = v12;
      IofCompleteRequest(a3, 0);
      return v12;
    }
    if ( (unsigned __int8)(MinorFunction - 1) <= 2u || MinorFunction == 9 )
    {
      LODWORD(v49) = Parameters[1].MaximumInstances;
      if ( (Parameters[1].ReadMode & 0x80u) == 0 )
      {
        v12 = -1073741162;
        goto LABEL_14;
      }
    }
    v7 = v46;
    v8 = (int)v48;
    v6 = v47;
  }
  v14 = MinorFunction;
  if ( MinorFunction > 5u )
  {
    if ( MinorFunction == 6 || MinorFunction == 7 )
      goto LABEL_23;
    if ( MinorFunction != 8 )
    {
      if ( MinorFunction == 9 )
      {
        v15 = -1073741808;
        a3->IoStatus.Status = -1073741808;
        goto LABEL_24;
      }
      if ( MinorFunction != 11 )
        return (unsigned int)-1073741808;
    }
    LODWORD(v46) = 0;
    v43 = 0LL;
    Src = 0LL;
    v26 = 0;
    v27 = WmipQueryWmiRegInfo(v6, &v46, &v43, &v48);
    v28 = Src;
    v15 = v27;
    if ( v27 >= 0 )
    {
      v29 = v46;
      if ( (v46 & 0x20) == 0 && !Src )
      {
        v15 = -1073741808;
LABEL_77:
        a3->IoStatus.Information = v26;
LABEL_79:
        a3->IoStatus.Status = v15;
        goto LABEL_80;
      }
      v30 = v43;
      v49 = WmipGuidList;
      if ( (v46 & 0x20) != 0 )
      {
        v31 = 0;
        v32 = 0LL;
      }
      else
      {
        v29 = v46 | 4;
        LODWORD(v46) = v46 | 4;
        v31 = (unsigned __int16)v43 + 2;
        v32 = 248LL;
      }
      v33 = v48;
      if ( !v48 )
      {
        v45[0] = 0LL;
        v45[1] = 0LL;
        v33 = v45;
        v48 = (unsigned __int16 *)v45;
      }
      v34 = v31 + 248;
      if ( (unsigned int)(v31 + 248) < 0xF8 || (v35 = v34 + (unsigned __int16)*v33 + 2, v35 < v34) )
      {
        v15 = -1073741675;
      }
      else
      {
        Parameters->NamedPipeType = v35;
        v26 = v35;
        v15 = 0;
        if ( v35 <= LowPart )
        {
          v36 = v49;
          p_CompletionMode = (__int64 *)&Parameters[1].CompletionMode;
          v38 = 7LL;
          Parameters->ReadMode = 0;
          Parameters->InboundQuota = 7;
          v39 = v36 + 2;
          Parameters->MaximumInstances = 0;
          Parameters->CompletionMode = v34;
          do
          {
            *(_OWORD *)(p_CompletionMode - 3) = *((_OWORD *)v39 - 1);
            v40 = v29 | v39[1];
            *p_CompletionMode = v32;
            *((_DWORD *)p_CompletionMode - 2) = v40;
            p_CompletionMode += 4;
            v41 = *v39;
            v39 += 6;
            *((_DWORD *)p_CompletionMode - 9) = v41;
            --v38;
          }
          while ( v38 );
          if ( (v29 & 4) != 0 )
          {
            LOWORD(Parameters[6].CompletionMode) = v30;
            memmove((char *)&Parameters[6].CompletionMode + 2, Src, (unsigned __int16)v43);
            v33 = v48;
          }
          v42 = (_WORD *)((char *)Parameters + v34);
          *v42 = *v33;
          memmove(v42 + 1, *((const void **)v48 + 1), *v48);
          v28 = Src;
        }
        else
        {
          v26 = 4;
        }
      }
    }
    if ( v28 )
      ExFreePoolWithTag(v28, 0);
    goto LABEL_77;
  }
  if ( MinorFunction == 5 )
    goto LABEL_23;
  if ( MinorFunction )
  {
    if ( MinorFunction != 1 )
    {
      if ( MinorFunction == 2 || MinorFunction == 3 )
      {
        v15 = -1073741114;
        a3->IoStatus.Status = -1073741114;
        goto LABEL_24;
      }
      if ( MinorFunction == 4 )
      {
LABEL_23:
        v15 = 0;
        a3->IoStatus.Status = 0;
LABEL_24:
        a3->IoStatus.Information = 0LL;
LABEL_80:
        IofCompleteRequest(a3, 0);
        return v15;
      }
      return (unsigned int)-1073741808;
    }
    if ( v7 > 1 )
    {
      LODWORD(v19) = v47;
      return (unsigned int)WmipQueryWmiDataBlock(
                             v19,
                             (int)a3,
                             v7,
                             (int)v49,
                             1,
                             (__int64)&Parameters[1].OutboundQuota,
                             LowPart - Parameters[1].InboundQuota,
                             (char *)Parameters + Parameters[1].InboundQuota);
    }
    RegEntryByProviderId = WmipFindRegEntryByProviderId(Parameters->ReadMode);
    if ( RegEntryByProviderId )
    {
      v19 = *(_QWORD *)(RegEntryByProviderId + 16);
      WmipUnreferenceRegEntry(RegEntryByProviderId);
      return (unsigned int)WmipQueryWmiDataBlock(
                             v19,
                             (int)a3,
                             v7,
                             (int)v49,
                             1,
                             (__int64)&Parameters[1].OutboundQuota,
                             LowPart - Parameters[1].InboundQuota,
                             (char *)Parameters + Parameters[1].InboundQuota);
    }
    return (unsigned int)IoWMICompleteRequest(v18, v17, a3, 3221226133LL, 0);
  }
  if ( LowPart >= 0x3C )
  {
    if ( v7 > 1 )
    {
      LODWORD(v22) = v47;
    }
    else
    {
      v21 = WmipFindRegEntryByProviderId(Parameters->ReadMode);
      if ( !v21 )
        return (unsigned int)IoWMICompleteRequest(v18, v17, a3, 3221226133LL, 0);
      v22 = *(_QWORD *)(v21 + 16);
      if ( v7 )
        v8 = 1;
      else
        v8 = *(_DWORD *)(v21 + 52);
      WmipUnreferenceRegEntry(v21);
    }
    if ( v8 )
    {
      Parameters[1].ReadMode &= ~0x10u;
      v23 = (8 * v8 + 67) & 0xFFFFFFF8;
      Parameters[1].MaximumInstances = v8;
      Parameters[1].CompletionMode = v23;
      if ( v23 > LowPart )
      {
        v24 = 0LL;
        v25 = 0;
      }
      else
      {
        p_OutboundQuota = (__int64)&Parameters[1].OutboundQuota;
        v24 = (char *)Parameters + v23;
        v25 = LowPart - v23;
      }
      return (unsigned int)WmipQueryWmiDataBlock(v22, (int)a3, v7, 0, v8, p_OutboundQuota, v25, v24);
    }
    else
    {
      return (unsigned int)IoWMICompleteRequest(v14, a2, a3, 3221226134LL, 0);
    }
  }
  return (unsigned int)IoWMICompleteRequest(MinorFunction, a2, a3, 3221225507LL, 60);
}
