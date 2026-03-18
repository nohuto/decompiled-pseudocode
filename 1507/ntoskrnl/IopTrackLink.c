/*
 * XREFs of IopTrackLink @ 0x14040C918
 * Callers:
 *     NtSetInformationFile @ 0x14006DCE0 (NtSetInformationFile.c)
 *     IopTrackLink @ 0x14040C918 (IopTrackLink.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     IoGetTransactionParameterBlock @ 0x1401014D0 (IoGetTransactionParameterBlock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlCompareMemoryUlong @ 0x14018BB20 (RtlCompareMemoryUlong.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     IopTrackLink @ 0x14040C918 (IopTrackLink.c)
 *     IopGetSetObjectId @ 0x14040D278 (IopGetSetObjectId.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     IopMarshalIds @ 0x1405C734C (IopMarshalIds.c)
 *     IopGetVolumeId @ 0x140671774 (IopGetVolumeId.c)
 *     IopSendMessageToTrackService @ 0x1406725FC (IopSendMessageToTrackService.c)
 *     IopSetRemoteLink @ 0x140673358 (IopSetRemoteLink.c)
 */

NTSTATUS __fastcall IopTrackLink(
        struct _FILE_OBJECT *a1,
        __int64 a2,
        void *a3,
        unsigned int a4,
        struct _KEVENT *a5,
        KPROCESSOR_MODE AccessMode)
{
  unsigned int v6; // eax
  struct _FILE_OBJECT *v8; // rsi
  KPROCESSOR_MODE v9; // r9
  unsigned int *PoolWithTagPriority; // rdi
  void *v11; // rcx
  __int64 v12; // rdx
  NTSTATUS result; // eax
  int v14; // eax
  int v15; // ebx
  __int64 v16; // rax
  int v17; // eax
  char v18; // cl
  __int64 v19; // rax
  int v20; // eax
  int VolumeId; // eax
  int v22; // eax
  int SetObjectId; // eax
  int v24; // eax
  char v25; // [rsp+34h] [rbp-2B4h]
  NTSTATUS Sizea; // [rsp+40h] [rbp-2A8h]
  void *Src; // [rsp+58h] [rbp-290h] BYREF
  int v30[2]; // [rsp+60h] [rbp-288h]
  void *v31; // [rsp+68h] [rbp-280h]
  struct _KEVENT *v32; // [rsp+70h] [rbp-278h]
  __int128 v33; // [rsp+80h] [rbp-268h] BYREF
  __m128i v34; // [rsp+90h] [rbp-258h]
  __int128 v35; // [rsp+A0h] [rbp-248h]
  __int128 v36; // [rsp+B0h] [rbp-238h]
  __int128 v37; // [rsp+C0h] [rbp-228h]
  __m128i v38; // [rsp+D0h] [rbp-218h]
  __int128 Source; // [rsp+E0h] [rbp-208h] BYREF
  __int128 v40; // [rsp+F0h] [rbp-1F8h]
  _BYTE v41[4]; // [rsp+100h] [rbp-1E8h] BYREF
  __int64 v42; // [rsp+104h] [rbp-1E4h]
  __int64 v43; // [rsp+10Ch] [rbp-1DCh]
  _BYTE v44[4]; // [rsp+118h] [rbp-1D0h] BYREF
  __int64 v45; // [rsp+11Ch] [rbp-1CCh]
  __int64 v46; // [rsp+124h] [rbp-1C4h]
  __int128 v47; // [rsp+130h] [rbp-1B8h]
  __m128i v48; // [rsp+140h] [rbp-1A8h]
  __int128 v49; // [rsp+150h] [rbp-198h]
  __int128 v50; // [rsp+160h] [rbp-188h]
  _OWORD v51[4]; // [rsp+170h] [rbp-178h] BYREF
  int v52; // [rsp+1B0h] [rbp-138h] BYREF
  int v53; // [rsp+1B8h] [rbp-130h]

  v6 = a4;
  Src = a3;
  *(_QWORD *)v30 = a2;
  v32 = a5;
  v8 = 0LL;
  v31 = 0LL;
  v9 = AccessMode;
  if ( AccessMode )
  {
    if ( ViVerifierDriverAddedThunkListHead )
    {
      PoolWithTagPriority = (unsigned int *)ExAllocatePoolWithTagPriority(
                                              PagedPool,
                                              v6,
                                              0x20206F49u,
                                              (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
      if ( !PoolWithTagPriority )
        RtlRaiseStatus(-1073741670);
    }
    else
    {
      PoolWithTagPriority = (unsigned int *)ExAllocatePoolWithQuotaTag(PagedPool, v6, 0x20206F49u);
    }
    memmove(PoolWithTagPriority, Src, a4);
    v6 = a4;
    v9 = AccessMode;
  }
  else
  {
    PoolWithTagPriority = (unsigned int *)a3;
  }
  v11 = *(void **)PoolWithTagPriority;
  if ( !*(_QWORD *)PoolWithTagPriority && v9 == 1 )
  {
LABEL_92:
    ExFreePoolWithTag(PoolWithTagPriority, 0);
    return -1073741811;
  }
  if ( v6 < 0xC )
  {
    if ( v9 )
      ExFreePoolWithTag(PoolWithTagPriority, 0);
    return -1073741675;
  }
  else
  {
    v12 = PoolWithTagPriority[2];
    if ( v6 - 12 < (unsigned int)v12 )
    {
      if ( !v9 )
        return -1073741811;
      goto LABEL_92;
    }
    if ( (unsigned __int64)(v12 + 36) > 0x100 )
    {
      if ( v9 )
        ExFreePoolWithTag(PoolWithTagPriority, 0);
      return -2147483643;
    }
    else
    {
      if ( !v11
        || (result = ObReferenceObjectByHandle(v11, 2u, (POBJECT_TYPE)IoFileObjectType, v9, &Src, 0LL),
            Sizea = result,
            v8 = (struct _FILE_OBJECT *)Src,
            v31 = Src,
            result >= 0) )
      {
        if ( (a1->DeviceObject->Characteristics & 0x10) != 0 )
        {
          SetObjectId = IopGetSetObjectId(a1);
          v15 = SetObjectId;
          if ( SetObjectId == -1073741772 )
            goto LABEL_19;
          if ( SetObjectId < 0 )
            goto LABEL_84;
          if ( RtlCompareMemoryUlong(&Source, 0x10uLL, 0) == 16 )
            goto LABEL_19;
          if ( IoGetTransactionParameterBlock(a1) )
            goto LABEL_83;
          if ( *(_QWORD *)PoolWithTagPriority )
          {
            if ( IoGetTransactionParameterBlock(v8) )
              goto LABEL_83;
            if ( *(_QWORD *)PoolWithTagPriority )
            {
              if ( (v8->DeviceObject->Characteristics & 0x10) != 0 )
              {
                v15 = IopGetSetObjectId(v8);
                if ( v15 < 0 )
                  goto LABEL_84;
                v15 = IopGetSetObjectId(v8);
                if ( v15 < 0 )
                  goto LABEL_84;
                IopMarshalIds(&v52, v41, v51, PoolWithTagPriority);
                v24 = IopTrackLink((int)a1, v30[0], (int)&v52, v53 + 12, (__int64)a5, 0);
                goto LABEL_72;
              }
              VolumeId = IopGetVolumeId(v8);
LABEL_68:
              v15 = VolumeId;
              if ( VolumeId < 0 )
                goto LABEL_84;
              v15 = IopGetSetObjectId(v8);
              if ( v15 < 0 )
                goto LABEL_84;
              IopMarshalIds(&v52, v41, v51, PoolWithTagPriority);
              v15 = IopTrackLink((int)a1, v30[0], (int)&v52, v53 + 12, (__int64)a5, 0);
              if ( v15 < 0 )
                goto LABEL_84;
              v24 = IopGetSetObjectId(a1);
LABEL_72:
              v15 = v24;
              if ( v24 < 0 )
                goto LABEL_84;
              v47 = v37;
              v48 = v38;
              v49 = Source;
              v50 = v40;
              v48.m128i_i8[0] = _mm_cvtsi128_si32(v38) | 1;
              v15 = IopGetSetObjectId(v8);
              if ( v15 >= 0 )
                goto LABEL_84;
              goto LABEL_74;
            }
          }
          if ( IoGetTransactionParameterBlock(a1)
            || *(_QWORD *)PoolWithTagPriority && IoGetTransactionParameterBlock(v8) )
          {
            goto LABEL_83;
          }
          v22 = IopSetRemoteLink(a1);
        }
        else
        {
          if ( *(_QWORD *)PoolWithTagPriority )
          {
            if ( (v8->DeviceObject->Characteristics & 0x10) == 0 )
            {
              v25 = 0;
              v14 = IopGetSetObjectId(a1);
              v15 = v14;
              if ( v14 != -1073741772 )
              {
                if ( v14 < 0 )
                  goto LABEL_84;
                if ( RtlCompareMemoryUlong(&Source, 0x10uLL, 0) != 16 )
                {
                  if ( !IoGetTransactionParameterBlock(a1)
                    && (!*(_QWORD *)PoolWithTagPriority || !IoGetTransactionParameterBlock(v8)) )
                  {
                    v15 = IopGetVolumeId(v8);
                    if ( v15 < 0 )
                      goto LABEL_84;
                    v15 = IopGetVolumeId(a1);
                    if ( v15 < 0 )
                      goto LABEL_84;
                    v15 = IopGetSetObjectId(a1);
                    if ( v15 < 0 )
                      goto LABEL_84;
                    v51[0] = v37;
                    v51[1] = v38;
                    v51[2] = Source;
                    v51[3] = v40;
                    v47 = v37;
                    v48 = v38;
                    v49 = Source;
                    v50 = v40;
                    v16 = v42 - v45;
                    if ( v42 == v45 )
                      v16 = v43 - v46;
                    if ( v16 )
                      v48.m128i_i8[0] = v38.m128i_i8[0] | 1;
                    v17 = IopGetSetObjectId(v8);
                    v15 = v17;
                    if ( v17 == -1073741635 || v17 == -1073741771 )
                    {
                      v15 = IopGetSetObjectId(v8);
                      if ( v15 >= 0 )
                        v15 = IopGetSetObjectId(v8);
                    }
                    if ( v15 >= 0 )
                    {
                      v18 = 1;
                      v25 = 1;
                      v19 = v42 - v45;
                      if ( v42 == v45 )
                        v19 = v43 - v46;
                      if ( !v19 )
                      {
LABEL_41:
                        if ( v15 >= 0 )
                          goto LABEL_84;
                        v20 = 0;
                        if ( v18 )
                          v20 = IopGetSetObjectId(v8);
                        if ( v20 < 0 )
                          goto LABEL_84;
LABEL_74:
                        IopGetSetObjectId(a1);
                        goto LABEL_84;
                      }
                      IopMarshalIds(&v52, v41, v51, PoolWithTagPriority);
                      v33 = v37;
                      v34 = v38;
                      v35 = Source;
                      v36 = v40;
                      v34.m128i_i8[0] = _mm_cvtsi128_si32(v38) & 0xFE;
                      v15 = IopSendMessageToTrackService(v44, &v33, &v52);
                    }
                    v18 = v25;
                    goto LABEL_41;
                  }
LABEL_83:
                  v15 = -1072103335;
                  goto LABEL_84;
                }
              }
              goto LABEL_19;
            }
            if ( (int)IopGetSetObjectId(a1) >= 0 && RtlCompareMemoryUlong(&Source, 0x10uLL, 0) != 16 )
            {
              if ( IoGetTransactionParameterBlock(a1)
                || *(_QWORD *)PoolWithTagPriority && IoGetTransactionParameterBlock(v8) )
              {
                goto LABEL_83;
              }
              VolumeId = IopGetSetObjectId(v8);
              goto LABEL_68;
            }
LABEL_19:
            v15 = 0;
LABEL_84:
            if ( AccessMode )
              ExFreePoolWithTag(PoolWithTagPriority, 0);
            if ( v8 )
              ObfDereferenceObject(v8);
            KeSetEvent(a5, 0, 0);
            return v15;
          }
          v15 = IopGetVolumeId(a1);
          if ( v15 < 0 )
            goto LABEL_84;
          v15 = IopGetSetObjectId(a1);
          if ( v15 < 0 )
            goto LABEL_84;
          if ( RtlCompareMemoryUlong(&Source, 0x10uLL, 0) == 16 )
            goto LABEL_19;
          if ( IoGetTransactionParameterBlock(a1)
            || *(_QWORD *)PoolWithTagPriority && IoGetTransactionParameterBlock(v8) )
          {
            goto LABEL_83;
          }
          v33 = v37;
          v34 = v38;
          v35 = Source;
          v36 = v40;
          v34.m128i_i8[0] = _mm_cvtsi128_si32(v38) & 0xFE;
          v22 = IopSendMessageToTrackService(v44, &v33, PoolWithTagPriority);
        }
        v15 = v22;
        goto LABEL_84;
      }
      if ( AccessMode )
      {
        ExFreePoolWithTag(PoolWithTagPriority, 0);
        return Sizea;
      }
    }
  }
  return result;
}
