/*
 * XREFs of IoWMISystemControl @ 0x1404A9E3C
 * Callers:
 *     WmipSystemControl @ 0x1404A9E30 (WmipSystemControl.c)
 * Callees:
 *     IofCompleteRequest @ 0x1400530E0 (IofCompleteRequest.c)
 *     WmipFindRegEntryByProviderId @ 0x1400C26D8 (WmipFindRegEntryByProviderId.c)
 *     WmipUnreferenceRegEntry @ 0x1400C2770 (WmipUnreferenceRegEntry.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     WmipQueryWmiDataBlock @ 0x1404AA13C (WmipQueryWmiDataBlock.c)
 *     WmipFindGuid @ 0x1404AA22C (WmipFindGuid.c)
 *     IoWMICompleteRequest @ 0x1404AA288 (IoWMICompleteRequest.c)
 *     WmipQueryWmiRegInfo @ 0x14058194C (WmipQueryWmiRegInfo.c)
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
  __int64 v12; // rcx
  __int64 v13; // r15
  unsigned int v14; // eax
  char *v15; // rcx
  int v16; // r13d
  unsigned int v18; // esi
  unsigned int v20; // r15d
  int v21; // eax
  void *v22; // rcx
  int v23; // edx
  __int16 v24; // r10
  int v25; // eax
  __int64 v26; // r11
  _WORD *v27; // r8
  unsigned int v28; // r12d
  unsigned int v29; // r9d
  __int64 *v30; // r9
  __int64 *p_CompletionMode; // rcx
  __int64 v32; // r13
  _DWORD *v33; // r9
  int v34; // eax
  int v35; // eax
  _WORD *v36; // rcx
  unsigned int v37; // ebx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r15
  __int64 RegEntryByProviderId; // rax
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
    || MinorFunction != 11 && MinorFunction != 8 && !WmipGuidList )
  {
    v18 = -1073741808;
    goto LABEL_47;
  }
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( MinorFunction == 11 || MinorFunction == 8 )
  {
LABEL_12:
    v12 = MinorFunction;
    if ( MinorFunction <= 5u )
    {
      if ( MinorFunction != 5 )
      {
        if ( !MinorFunction )
        {
          if ( LowPart >= 0x3C )
          {
            if ( v7 > 1 )
            {
              LODWORD(v13) = v47;
LABEL_18:
              if ( v8 )
              {
                Parameters[1].ReadMode &= ~0x10u;
                v14 = (8 * v8 + 67) & 0xFFFFFFF8;
                Parameters[1].MaximumInstances = v8;
                Parameters[1].CompletionMode = v14;
                if ( v14 > LowPart )
                {
                  v15 = 0LL;
                  v16 = 0;
                }
                else
                {
                  p_OutboundQuota = (__int64)&Parameters[1].OutboundQuota;
                  v15 = (char *)Parameters + v14;
                  v16 = LowPart - v14;
                }
                return (unsigned int)WmipQueryWmiDataBlock(v13, (int)a3, v7, 0, v8, p_OutboundQuota, v16, v15);
              }
              else
              {
                return (unsigned int)IoWMICompleteRequest(v12, a2, a3, 3221226134LL, 0);
              }
            }
            RegEntryByProviderId = WmipFindRegEntryByProviderId(Parameters->ReadMode);
            if ( RegEntryByProviderId )
            {
              v13 = *(_QWORD *)(RegEntryByProviderId + 16);
              if ( v7 )
                v8 = 1;
              else
                v8 = *(_DWORD *)(RegEntryByProviderId + 52);
              WmipUnreferenceRegEntry(RegEntryByProviderId);
              goto LABEL_18;
            }
            return (unsigned int)IoWMICompleteRequest(v40, v39, a3, 3221226133LL, 0);
          }
          return (unsigned int)IoWMICompleteRequest(MinorFunction, a2, a3, 3221225507LL, 60);
        }
        if ( MinorFunction == 1 )
        {
          if ( v7 > 1 )
          {
            LODWORD(v41) = v47;
          }
          else
          {
            v38 = WmipFindRegEntryByProviderId(Parameters->ReadMode);
            if ( !v38 )
              return (unsigned int)IoWMICompleteRequest(v40, v39, a3, 3221226133LL, 0);
            v41 = *(_QWORD *)(v38 + 16);
            WmipUnreferenceRegEntry(v38);
          }
          return (unsigned int)WmipQueryWmiDataBlock(
                                 v41,
                                 (int)a3,
                                 v7,
                                 (int)v49,
                                 1,
                                 (__int64)&Parameters[1].OutboundQuota,
                                 LowPart - Parameters[1].InboundQuota,
                                 (char *)Parameters + Parameters[1].InboundQuota);
        }
        if ( MinorFunction != 2 && MinorFunction != 3 )
        {
          if ( MinorFunction != 4 )
            return (unsigned int)-1073741808;
          goto LABEL_79;
        }
        v18 = -1073741114;
        a3->IoStatus.Status = -1073741114;
LABEL_80:
        a3->IoStatus.Information = 0LL;
        goto LABEL_48;
      }
LABEL_79:
      v18 = 0;
      a3->IoStatus.Status = 0;
      goto LABEL_80;
    }
    if ( MinorFunction == 6 || MinorFunction == 7 )
      goto LABEL_79;
    if ( MinorFunction != 8 )
    {
      if ( MinorFunction == 9 )
      {
        v18 = -1073741808;
        a3->IoStatus.Status = -1073741808;
        goto LABEL_80;
      }
      if ( MinorFunction != 11 )
        return (unsigned int)-1073741808;
    }
    LODWORD(v46) = 0;
    v43 = 0LL;
    Src = 0LL;
    v20 = 0;
    v21 = WmipQueryWmiRegInfo(v6, &v46, &v43, &v48);
    v22 = Src;
    v18 = v21;
    if ( v21 >= 0 )
    {
      v23 = v46;
      if ( (v46 & 0x20) == 0 && !Src )
      {
        v18 = -1073741808;
LABEL_46:
        a3->IoStatus.Information = v20;
LABEL_47:
        a3->IoStatus.Status = v18;
LABEL_48:
        IofCompleteRequest(a3, 0);
        return v18;
      }
      v24 = v43;
      v49 = WmipGuidList;
      if ( (v46 & 0x20) != 0 )
      {
        v25 = 0;
        v26 = 0LL;
      }
      else
      {
        v23 = v46 | 4;
        LODWORD(v46) = v46 | 4;
        v25 = (unsigned __int16)v43 + 2;
        v26 = 248LL;
      }
      v27 = v48;
      if ( !v48 )
      {
        v45[0] = 0LL;
        v45[1] = 0LL;
        v27 = v45;
        v48 = (unsigned __int16 *)v45;
      }
      v28 = v25 + 248;
      if ( (unsigned int)(v25 + 248) < 0xF8 || (v29 = v28 + (unsigned __int16)*v27 + 2, v29 < v28) )
      {
        v18 = -1073741675;
      }
      else
      {
        Parameters->NamedPipeType = v29;
        v20 = v29;
        v18 = 0;
        if ( v29 > LowPart )
        {
          v20 = 4;
        }
        else
        {
          v30 = v49;
          p_CompletionMode = (__int64 *)&Parameters[1].CompletionMode;
          v32 = 7LL;
          Parameters->ReadMode = 0;
          Parameters->InboundQuota = 7;
          v33 = v30 + 2;
          Parameters->MaximumInstances = 0;
          Parameters->CompletionMode = v28;
          do
          {
            *(_OWORD *)(p_CompletionMode - 3) = *((_OWORD *)v33 - 1);
            v34 = v23 | v33[1];
            *p_CompletionMode = v26;
            *((_DWORD *)p_CompletionMode - 2) = v34;
            p_CompletionMode += 4;
            v35 = *v33;
            v33 += 6;
            *((_DWORD *)p_CompletionMode - 9) = v35;
            --v32;
          }
          while ( v32 );
          if ( (v23 & 4) != 0 )
          {
            LOWORD(Parameters[6].CompletionMode) = v24;
            memmove((char *)&Parameters[6].CompletionMode + 2, Src, (unsigned __int16)v43);
            v27 = v48;
          }
          v36 = (_WORD *)((char *)Parameters + v28);
          *v36 = *v27;
          memmove(v36 + 1, *((const void **)v48 + 1), *v48);
          v22 = Src;
        }
      }
    }
    if ( v22 )
      ExFreePoolWithTag(v22, 0);
    goto LABEL_46;
  }
  if ( (unsigned __int8)WmipFindGuid(
                          (unsigned int)WmipGuidList,
                          7,
                          CurrentStackLocation->Parameters.QueryDirectory.FileName,
                          (unsigned int)&v46,
                          (__int64)&v48) )
  {
    if ( (unsigned __int8)(MinorFunction - 1) <= 2u || MinorFunction == 9 )
    {
      LODWORD(v49) = Parameters[1].MaximumInstances;
      if ( (Parameters[1].ReadMode & 0x80u) == 0 )
      {
        v37 = -1073741162;
        goto LABEL_52;
      }
    }
    v7 = v46;
    v8 = (int)v48;
    v6 = v47;
    goto LABEL_12;
  }
  v37 = -1073741163;
LABEL_52:
  a3->IoStatus.Status = v37;
  IofCompleteRequest(a3, 0);
  return v37;
}
