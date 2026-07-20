/*
 * XREFs of sub_1400031FC @ 0x1400031FC
 * Callers:
 *     sub_140002E90 @ 0x140002E90 (sub_140002E90.c)
 *     sub_140012044 @ 0x140012044 (sub_140012044.c)
 * Callees:
 *     sub_1400042C4 @ 0x1400042C4 (sub_1400042C4.c)
 *     sub_1400046B4 @ 0x1400046B4 (sub_1400046B4.c)
 *     sub_14000474C @ 0x14000474C (sub_14000474C.c)
 */

NTSTATUS __fastcall sub_1400031FC(__int64 a1, void *a2, __int128 *a3, __int64 a4, _OWORD *a5)
{
  int v5; // eax
  __int64 v8; // rax
  __int64 v9; // rbx
  NTSTATUS v10; // edi
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  signed __int32 v17; // eax
  NTSTATUS result; // eax
  NTSTATUS v19; // ebx
  int v20; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+48h] [rbp-B8h]
  int v22; // [rsp+50h] [rbp-B0h]
  _PORT_MESSAGE LpcReply; // [rsp+60h] [rbp-A0h] BYREF
  int v24; // [rsp+88h] [rbp-78h]
  NTSTATUS v25; // [rsp+8Ch] [rbp-74h]
  signed __int32 v26; // [rsp+90h] [rbp-70h]
  void *TargetHandle[2]; // [rsp+98h] [rbp-68h] BYREF
  HANDLE SourceHandle[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v29; // [rsp+B8h] [rbp-48h]
  __int128 v30; // [rsp+C8h] [rbp-38h]
  __int128 v31; // [rsp+D8h] [rbp-28h]
  __int128 v32; // [rsp+E8h] [rbp-18h]
  __int64 v33; // [rsp+F8h] [rbp-8h]
  int v34; // [rsp+108h] [rbp+8h]
  __int128 v35; // [rsp+110h] [rbp+10h]
  HANDLE ThreadHandle; // [rsp+1B0h] [rbp+B0h] BYREF

  v5 = *((_DWORD *)a3 + 18);
  v20 = 1;
  v21 = 0LL;
  v22 = v5;
  v8 = sub_1400042C4(a1, &v20);
  v9 = v8;
  if ( v8 )
  {
    v10 = sub_14000474C(v8);
    if ( v10 < 0 )
      goto LABEL_11;
    v11 = *a3;
    v34 = 0;
    v12 = a3[1];
    *(_OWORD *)TargetHandle = v11;
    v13 = a3[2];
    *(_OWORD *)SourceHandle = v12;
    v14 = a3[3];
    v29 = v13;
    v15 = a3[4];
    v30 = v14;
    v16 = a3[5];
    v31 = v15;
    v33 = *((_QWORD *)a3 + 12);
    v32 = v16;
    v35 = a5 ? *a5 : 0LL;
    v10 = NtDuplicateObject(a2, *((HANDLE *)a3 + 1), *(HANDLE *)(v9 + 32), &TargetHandle[1], 0x1FFFFFu, 0, 0);
    if ( v10 < 0 )
      goto LABEL_11;
    v10 = NtDuplicateObject(a2, *((HANDLE *)a3 + 2), *(HANDLE *)(v9 + 32), SourceHandle, 0x1FFFFFu, 0, 0);
    if ( v10 >= 0 )
    {
      v17 = _InterlockedIncrement((volatile signed __int32 *)(v9 + 4));
      if ( !v17 )
        _InterlockedOr((volatile signed __int32 *)(v9 + 8), 8u);
      v26 = v17;
      v24 = 0;
      *(_QWORD *)&LpcReply.u1.s1.DataLength = 18874520LL;
      v10 = NtRequestWaitReplyPort(*(HANDLE *)(v9 + 40), &LpcReply, &LpcReply);
      if ( v10 >= 0 )
      {
        v10 = v25;
LABEL_11:
        sub_1400046B4((PVOID)v9);
        return v10;
      }
      NtDuplicateObject(*(HANDLE *)(v9 + 32), SourceHandle[0], 0LL, 0LL, 0, 0, 1u);
    }
    NtDuplicateObject(*(HANDLE *)(v9 + 32), TargetHandle[1], 0LL, 0LL, 0, 0, 1u);
    goto LABEL_11;
  }
  if ( *((_DWORD *)a3 + 18) != 1 )
    return -1073741570;
  result = NtDuplicateObject(a2, *((HANDLE *)a3 + 2), (HANDLE)0xFFFFFFFFFFFFFFFFLL, &ThreadHandle, 2u, 0, 0);
  if ( result >= 0 )
  {
    v19 = NtResumeThread(ThreadHandle, 0LL);
    NtClose(ThreadHandle);
    return v19;
  }
  return result;
}
