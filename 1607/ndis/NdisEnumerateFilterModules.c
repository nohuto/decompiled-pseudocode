/*
 * XREFs of NdisEnumerateFilterModules @ 0x1C0057280
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     ndisDereferencePackage @ 0x1C009B138 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C009B308 (ndisReferencePackage.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A46C8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A4714 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00E30F8 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ndisReferenceMiniportByName @ 0x1C00E81F0 (ndisReferenceMiniportByName.c)
 */

NDIS_STATUS __stdcall NdisEnumerateFilterModules(
        NDIS_HANDLE NdisHandle,
        PVOID InterfaceBuffer,
        ULONG InterfaceBufferLength,
        PULONG BytesNeeded,
        PULONG BytesWritten)
{
  _QWORD *v5; // r15
  _QWORD *v7; // rdi
  char *v8; // rsi
  int v9; // r12d
  ULONG v10; // r13d
  char *v11; // rbx
  __int64 v12; // rcx
  KIRQL v13; // dl
  __int64 v14; // r15
  char *v15; // rbx
  unsigned __int16 v16; // dx
  __int64 v17; // rax
  __int128 v18; // xmm0
  unsigned int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rdx
  ULONG v23; // [rsp+28h] [rbp-51h]
  ULONG v24; // [rsp+2Ch] [rbp-4Dh]
  unsigned int v25; // [rsp+30h] [rbp-49h]

  v5 = NdisHandle;
  v23 = InterfaceBufferLength;
  v7 = 0LL;
  v8 = (char *)InterfaceBuffer + InterfaceBufferLength;
  v25 = 0;
  v9 = 0;
  v10 = InterfaceBufferLength;
  v11 = 0LL;
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_q(0x29u, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, (__int64)NdisHandle);
  switch ( *(_BYTE *)v5 )
  {
    case 5:
      v7 = (_QWORD *)v5[4];
      break;
    case 0x11:
      v7 = v5;
      break;
    case 0x12:
      v7 = (_QWORD *)v5[2];
      break;
  }
  ndisReferencePackage(&ndisPkgs);
  v24 = 80;
  if ( v7 )
  {
    if ( InterfaceBufferLength >= 0x50 )
    {
      v10 = InterfaceBufferLength - 80;
      *(_QWORD *)InterfaceBuffer = 5243264LL;
      v23 = InterfaceBufferLength - 80;
      v11 = (char *)InterfaceBuffer + 16;
      *((_DWORD *)InterfaceBuffer + 3) = 16;
      *((_DWORD *)InterfaceBuffer + 2) = 0;
    }
    v12 = v7[478];
    if ( v12 )
    {
      ndisReferenceMiniportByName((PCUNICODE_STRING)(v12 + 8));
      v9 = -1073676282;
    }
    else
    {
      Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(v7 + 651));
      v13 = KeAcquireSpinLockRaiseToDpc(v7 + 12);
      v14 = v7[257];
      v7[65] = KeGetCurrentThread();
      *((_DWORD *)v7 + 464) = 2098499;
      if ( v14 )
      {
        v15 = v11 + 2;
        do
        {
          v7[65] = 0LL;
          *((_DWORD *)v7 + 464) = 0;
          KeReleaseSpinLock(v7 + 12, v13);
          v16 = 0;
          v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 464LL) + 64LL);
          if ( v17 )
          {
            v18 = *(_OWORD *)(v17 + 8);
            v16 = v18;
          }
          else
          {
            v18 = 0uLL;
          }
          v19 = *(unsigned __int16 *)(*(_QWORD *)(v14 + 40) + 8LL) + v25 + v16 + 80;
          v24 += v19;
          v25 = v19;
          if ( v10 >= v19 )
          {
            *(_DWORD *)(v15 - 2) = 5243264;
            *(_DWORD *)(v15 + 10) = ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 464LL) + 56LL) & 1) != 0) + 1;
            *(_DWORD *)(v15 + 6) = 2 - ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 464LL) + 56LL) & 2) != 0);
            *(_DWORD *)(v15 + 14) = *(_DWORD *)(v14 + 824);
            *(_QWORD *)(v15 + 22) = *(_QWORD *)(*(_QWORD *)(v14 + 832) + 1312LL);
            *(_DWORD *)(v15 + 2) = 2;
            *(_OWORD *)(v15 + 30) = v18;
            *((_WORD *)v15 + 24) = *(_WORD *)(*(_QWORD *)(v14 + 40) + 8LL);
            *((_WORD *)v15 + 23) = *(_WORD *)(*(_QWORD *)(v14 + 40) + 8LL);
            v8 -= *(unsigned __int16 *)(*(_QWORD *)(v14 + 40) + 8LL);
            *(_QWORD *)(v15 + 54) = v8;
            memmove(
              v8,
              *(const void **)(*(_QWORD *)(v14 + 40) + 16LL),
              *(unsigned __int16 *)(*(_QWORD *)(v14 + 40) + 8LL));
            v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 464LL) + 64LL);
            if ( v20 )
            {
              v8 -= *(unsigned __int16 *)(v20 + 8);
              *(_QWORD *)(v15 + 38) = v8;
              v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 464LL) + 64LL);
              memmove(v8, *(const void **)(v21 + 16), *(unsigned __int16 *)(v21 + 8));
            }
            ++*((_DWORD *)InterfaceBuffer + 2);
            v15 += 64;
            v10 -= v25;
          }
          v13 = KeAcquireSpinLockRaiseToDpc(v7 + 12);
          v7[65] = KeGetCurrentThread();
          *((_DWORD *)v7 + 464) = 2098576;
          v14 = *(_QWORD *)(v14 + 112);
        }
        while ( v14 );
        v23 = v10;
        v9 = 0;
      }
      v7[65] = 0LL;
      *((_DWORD *)v7 + 464) = 0;
      KeReleaseSpinLock(v7 + 12, v13);
      Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v7 + 651));
      Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(v7 + 651), RunAsynchronous, 0);
      v5 = NdisHandle;
    }
  }
  else
  {
    v9 = -1073741811;
  }
  ndisDereferencePackage(&ndisPkgs);
  if ( !v9 )
  {
    if ( v24 > InterfaceBufferLength )
      v9 = -1073676266;
    *BytesNeeded = v24;
    *BytesWritten = InterfaceBufferLength - v23;
  }
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_qD(0x2Au, &WPP_769814ed3e85312f0115d0e4b03a7387_Traceguids, (__int64)v5, v9);
  return v9;
}
