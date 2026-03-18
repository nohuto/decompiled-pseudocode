/*
 * XREFs of IopTrackLink @ 0x1404BC4A8
 * Callers:
 *     NtSetInformationFile @ 0x14008E8E0 (NtSetInformationFile.c)
 *     IopTrackLink @ 0x1404BC4A8 (IopTrackLink.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     IoGetTransactionParameterBlock @ 0x1400C7290 (IoGetTransactionParameterBlock.c)
 *     sub_1400CC928 @ 0x1400CC928 (sub_1400CC928.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     RtlCompareMemoryUlong @ 0x14015C040 (RtlCompareMemoryUlong.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     IopTrackLink @ 0x1404BC4A8 (IopTrackLink.c)
 *     IopGetSetObjectId @ 0x1404BCDCC (IopGetSetObjectId.c)
 *     IopMarshalIds @ 0x14054F5A4 (IopMarshalIds.c)
 *     IopGetVolumeId @ 0x1405F78EC (IopGetVolumeId.c)
 *     IopSendMessageToTrackService @ 0x1405F8664 (IopSendMessageToTrackService.c)
 *     IopSetRemoteLink @ 0x1405F91FC (IopSetRemoteLink.c)
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
  struct _FILE_OBJECT *v7; // rbx
  struct _FILE_OBJECT *v8; // rsi
  KPROCESSOR_MODE v9; // dl
  unsigned int *v11; // rdi
  void *v12; // rcx
  __int64 v13; // r8
  NTSTATUS result; // eax
  int v15; // eax
  int v16; // ebx
  __int64 v17; // rax
  int v18; // eax
  char v19; // cl
  __int64 v20; // rax
  int v21; // eax
  int VolumeId; // eax
  int v23; // eax
  int SetObjectId; // eax
  int v25; // eax
  char v26; // [rsp+34h] [rbp-2B4h]
  NTSTATUS v29; // [rsp+40h] [rbp-2A8h]
  void *Src; // [rsp+58h] [rbp-290h] BYREF
  int v31[2]; // [rsp+60h] [rbp-288h]
  void *v32; // [rsp+68h] [rbp-280h]
  struct _KEVENT *v33; // [rsp+70h] [rbp-278h]
  __int128 v34; // [rsp+80h] [rbp-268h] BYREF
  __m128i v35; // [rsp+90h] [rbp-258h]
  __int128 v36; // [rsp+A0h] [rbp-248h]
  __int128 v37; // [rsp+B0h] [rbp-238h]
  __int128 v38; // [rsp+C0h] [rbp-228h]
  __m128i v39; // [rsp+D0h] [rbp-218h]
  __int128 Source; // [rsp+E0h] [rbp-208h] BYREF
  __int128 v41; // [rsp+F0h] [rbp-1F8h]
  _BYTE v42[4]; // [rsp+100h] [rbp-1E8h] BYREF
  __int64 v43; // [rsp+104h] [rbp-1E4h]
  __int64 v44; // [rsp+10Ch] [rbp-1DCh]
  _BYTE v45[4]; // [rsp+118h] [rbp-1D0h] BYREF
  __int64 v46; // [rsp+11Ch] [rbp-1CCh]
  __int64 v47; // [rsp+124h] [rbp-1C4h]
  __int128 v48; // [rsp+130h] [rbp-1B8h]
  __m128i v49; // [rsp+140h] [rbp-1A8h]
  __int128 v50; // [rsp+150h] [rbp-198h]
  __int128 v51; // [rsp+160h] [rbp-188h]
  _OWORD v52[4]; // [rsp+170h] [rbp-178h] BYREF
  int v53; // [rsp+1B0h] [rbp-138h] BYREF
  int v54; // [rsp+1B8h] [rbp-130h]

  v6 = a4;
  Src = a3;
  *(_QWORD *)v31 = a2;
  v7 = a1;
  v33 = a5;
  v8 = 0LL;
  v32 = 0LL;
  v9 = AccessMode;
  if ( AccessMode )
  {
    v11 = (unsigned int *)sub_1400CC928(PagedPool, a4);
    memmove(v11, Src, a4);
    v7 = a1;
    v9 = AccessMode;
    v6 = a4;
  }
  else
  {
    v11 = (unsigned int *)a3;
  }
  v12 = *(void **)v11;
  if ( !*(_QWORD *)v11 && v9 == 1 )
  {
LABEL_88:
    ExFreePoolWithTag(v11, 0);
    return -1073741811;
  }
  if ( v6 < 0xC )
  {
    if ( v9 )
      ExFreePoolWithTag(v11, 0);
    return -1073741675;
  }
  else
  {
    v13 = v11[2];
    if ( v6 - 12 < (unsigned int)v13 )
    {
      if ( !v9 )
        return -1073741811;
      goto LABEL_88;
    }
    if ( (unsigned __int64)(v13 + 36) > 0x100 )
    {
      if ( v9 )
        ExFreePoolWithTag(v11, 0);
      return -2147483643;
    }
    else
    {
      if ( !v12
        || (result = ObReferenceObjectByHandle(v12, 2u, (POBJECT_TYPE)IoFileObjectType, v9, &Src, 0LL),
            v29 = result,
            v8 = (struct _FILE_OBJECT *)Src,
            v32 = Src,
            result >= 0) )
      {
        if ( (v7->DeviceObject->Characteristics & 0x10) != 0 )
        {
          SetObjectId = IopGetSetObjectId(v7);
          v16 = SetObjectId;
          if ( SetObjectId == -1073741772 )
            goto LABEL_15;
          if ( SetObjectId < 0 )
            goto LABEL_80;
          if ( RtlCompareMemoryUlong(&Source, 0x10uLL, 0) == 16 )
            goto LABEL_15;
          if ( IoGetTransactionParameterBlock(a1) )
            goto LABEL_79;
          if ( *(_QWORD *)v11 )
          {
            if ( IoGetTransactionParameterBlock(v8) )
              goto LABEL_79;
            if ( *(_QWORD *)v11 )
            {
              if ( (v8->DeviceObject->Characteristics & 0x10) != 0 )
              {
                v16 = IopGetSetObjectId(v8);
                if ( v16 < 0 )
                  goto LABEL_80;
                v16 = IopGetSetObjectId(v8);
                if ( v16 < 0 )
                  goto LABEL_80;
                IopMarshalIds(&v53, v42, v52, v11);
                v25 = IopTrackLink((int)a1, v31[0], (int)&v53, v54 + 12, (__int64)a5, 0);
                goto LABEL_68;
              }
              VolumeId = IopGetVolumeId(v8);
LABEL_64:
              v16 = VolumeId;
              if ( VolumeId < 0 )
                goto LABEL_80;
              v16 = IopGetSetObjectId(v8);
              if ( v16 < 0 )
                goto LABEL_80;
              IopMarshalIds(&v53, v42, v52, v11);
              v16 = IopTrackLink((int)a1, v31[0], (int)&v53, v54 + 12, (__int64)a5, 0);
              if ( v16 < 0 )
                goto LABEL_80;
              v25 = IopGetSetObjectId(a1);
LABEL_68:
              v16 = v25;
              if ( v25 < 0 )
                goto LABEL_80;
              v48 = v38;
              v49 = v39;
              v50 = Source;
              v51 = v41;
              v49.m128i_i8[0] = _mm_cvtsi128_si32(v39) | 1;
              v16 = IopGetSetObjectId(v8);
              if ( v16 >= 0 )
                goto LABEL_80;
              goto LABEL_70;
            }
          }
          if ( IoGetTransactionParameterBlock(a1) || *(_QWORD *)v11 && IoGetTransactionParameterBlock(v8) )
            goto LABEL_79;
          v23 = IopSetRemoteLink(a1);
        }
        else
        {
          if ( *(_QWORD *)v11 )
          {
            if ( (v8->DeviceObject->Characteristics & 0x10) == 0 )
            {
              v26 = 0;
              v15 = IopGetSetObjectId(v7);
              v16 = v15;
              if ( v15 != -1073741772 )
              {
                if ( v15 < 0 )
                  goto LABEL_80;
                if ( RtlCompareMemoryUlong(&Source, 0x10uLL, 0) != 16 )
                {
                  if ( !IoGetTransactionParameterBlock(a1) && (!*(_QWORD *)v11 || !IoGetTransactionParameterBlock(v8)) )
                  {
                    v16 = IopGetVolumeId(v8);
                    if ( v16 < 0 )
                      goto LABEL_80;
                    v16 = IopGetVolumeId(a1);
                    if ( v16 < 0 )
                      goto LABEL_80;
                    v16 = IopGetSetObjectId(a1);
                    if ( v16 < 0 )
                      goto LABEL_80;
                    v52[0] = v38;
                    v52[1] = v39;
                    v52[2] = Source;
                    v52[3] = v41;
                    v48 = v38;
                    v49 = v39;
                    v50 = Source;
                    v51 = v41;
                    v17 = v43 - v46;
                    if ( v43 == v46 )
                      v17 = v44 - v47;
                    if ( v17 )
                      v49.m128i_i8[0] = v39.m128i_i8[0] | 1;
                    v18 = IopGetSetObjectId(v8);
                    v16 = v18;
                    if ( v18 == -1073741635 || v18 == -1073741771 )
                    {
                      v16 = IopGetSetObjectId(v8);
                      if ( v16 >= 0 )
                        v16 = IopGetSetObjectId(v8);
                    }
                    if ( v16 >= 0 )
                    {
                      v19 = 1;
                      v26 = 1;
                      v20 = v43 - v46;
                      if ( v43 == v46 )
                        v20 = v44 - v47;
                      if ( !v20 )
                      {
LABEL_37:
                        if ( v16 >= 0 )
                          goto LABEL_80;
                        v21 = 0;
                        if ( v19 )
                          v21 = IopGetSetObjectId(v8);
                        if ( v21 < 0 )
                          goto LABEL_80;
LABEL_70:
                        IopGetSetObjectId(a1);
                        goto LABEL_80;
                      }
                      IopMarshalIds(&v53, v42, v52, v11);
                      v34 = v38;
                      v35 = v39;
                      v36 = Source;
                      v37 = v41;
                      v35.m128i_i8[0] = _mm_cvtsi128_si32(v39) & 0xFE;
                      v16 = IopSendMessageToTrackService(v45, &v34, &v53);
                    }
                    v19 = v26;
                    goto LABEL_37;
                  }
LABEL_79:
                  v16 = -1072103335;
                  goto LABEL_80;
                }
              }
              goto LABEL_15;
            }
            if ( (int)IopGetSetObjectId(v7) >= 0 && RtlCompareMemoryUlong(&Source, 0x10uLL, 0) != 16 )
            {
              if ( IoGetTransactionParameterBlock(v7) || *(_QWORD *)v11 && IoGetTransactionParameterBlock(v8) )
                goto LABEL_79;
              VolumeId = IopGetSetObjectId(v8);
              goto LABEL_64;
            }
LABEL_15:
            v16 = 0;
LABEL_80:
            if ( AccessMode )
              ExFreePoolWithTag(v11, 0);
            if ( v8 )
              ObfDereferenceObject(v8);
            KeSetEvent(a5, 0, 0);
            return v16;
          }
          v16 = IopGetVolumeId(v7);
          if ( v16 < 0 )
            goto LABEL_80;
          v16 = IopGetSetObjectId(a1);
          if ( v16 < 0 )
            goto LABEL_80;
          if ( RtlCompareMemoryUlong(&Source, 0x10uLL, 0) == 16 )
            goto LABEL_15;
          if ( IoGetTransactionParameterBlock(a1) || *(_QWORD *)v11 && IoGetTransactionParameterBlock(v8) )
            goto LABEL_79;
          v34 = v38;
          v35 = v39;
          v36 = Source;
          v37 = v41;
          v35.m128i_i8[0] = _mm_cvtsi128_si32(v39) & 0xFE;
          v23 = IopSendMessageToTrackService(v45, &v34, v11);
        }
        v16 = v23;
        goto LABEL_80;
      }
      if ( AccessMode )
      {
        ExFreePoolWithTag(v11, 0);
        return v29;
      }
    }
  }
  return result;
}
