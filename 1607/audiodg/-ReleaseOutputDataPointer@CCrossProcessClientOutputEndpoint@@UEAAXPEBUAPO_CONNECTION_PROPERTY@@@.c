/*
 * XREFs of ?ReleaseOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x14003AD70
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x1400171B4 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     memset_0 @ 0x140018550 (memset_0.c)
 *     memcpy_0 @ 0x140019602 (memcpy_0.c)
 *     ?AEWMILOG_DATA@@YAXKPEAXEE_K11@Z @ 0x14003C104 (-AEWMILOG_DATA@@YAXKPEAXEE_K11@Z.c)
 */

void __fastcall CCrossProcessClientOutputEndpoint::ReleaseOutputDataPointer(
        CCrossProcessClientOutputEndpoint *this,
        const struct APO_CONNECTION_PROPERTY *a2,
        unsigned __int8 a3)
{
  unsigned __int64 u32ValidFrameCount; // rbx
  CCrossProcessBaseEndpoint *v4; // r12
  unsigned int v6; // esi
  unsigned __int64 v8; // r13
  signed __int64 v9; // r15
  unsigned __int8 v10; // r8
  unsigned int v11; // ecx
  __int64 v12; // r8
  unsigned int v13; // edx
  BOOL v14; // ecx
  unsigned int v15; // ebp
  void *v16; // rcx
  unsigned __int64 v17; // rbx
  int v18; // edx
  unsigned int v19; // ebp
  void *v20; // rcx
  int v21; // edx
  int v22; // edx
  void *v23; // rcx
  size_t v24; // r8

  u32ValidFrameCount = a2->u32ValidFrameCount;
  v4 = (CCrossProcessClientOutputEndpoint *)((char *)this - 424);
  v6 = 0;
  v8 = (unsigned int)u32ValidFrameCount;
  v9 = *(_QWORD *)(*((_QWORD *)this - 45) + 8LL);
  AEWMILOG_DATA((unsigned int)this, (char *)this - 424, a3, 0x13u, u32ValidFrameCount, v9, 0LL);
  if ( !CCrossProcessBaseEndpoint::IsValidOffset(v4, v9, v10) )
    goto LABEL_30;
  if ( !(_DWORD)u32ValidFrameCount )
    goto LABEL_30;
  v11 = *((_DWORD *)this - 74);
  v12 = *((_QWORD *)this - 44);
  v6 = u32ValidFrameCount * *((_DWORD *)this - 86);
  v13 = *(_DWORD *)(v12 + 140) + v9 % v11;
  if ( v13 > *(_DWORD *)(v12 + 144) )
    goto LABEL_30;
  LOBYTE(v12) = 1;
  v14 = (unsigned int)u32ValidFrameCount < *((_DWORD *)this + 5) && (*((_BYTE *)this - 272) & 1) != 0;
  _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this - 45) + 168LL), v14);
  v11 = *((_DWORD *)this + 4);
  if ( !v11 )
  {
    if ( a2->u32BufferFlags != BUFFER_SILENT )
      goto LABEL_29;
    v23 = (void *)(*((_QWORD *)this - 45) + v13);
    v22 = 0;
    v24 = v6;
    if ( *((_DWORD *)this - 84) == 8 )
      v22 = 128;
    goto LABEL_28;
  }
  if ( v11 != 1 )
    goto LABEL_30;
  v15 = *(_DWORD *)(*((_QWORD *)this - 44) + 144LL);
  if ( v13 + v6 > v15 )
  {
    v19 = v15 - v13;
    v20 = (void *)(*((_QWORD *)this - 45) + v13);
    if ( a2->u32BufferFlags == BUFFER_VALID )
    {
      memcpy_0(v20, *((const void **)this - 41), v19);
      memcpy_0(
        (void *)(*((_QWORD *)this - 45) + *(unsigned int *)(*((_QWORD *)this - 44) + 140LL)),
        (const void *)(v19 + *((_QWORD *)this - 41)),
        v6 - v19);
LABEL_29:
      v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)(*((_QWORD *)this - 45) + 8LL), v6);
      goto LABEL_30;
    }
    v21 = 0;
    if ( *((_DWORD *)this - 84) == 8 )
      v21 = 128;
    memset_0(v20, v21, v19);
    v22 = 0;
    v23 = (void *)(*((_QWORD *)this - 45) + *(unsigned int *)(*((_QWORD *)this - 44) + 140LL));
    if ( *((_DWORD *)this - 84) == 8 )
      v22 = 128;
    v24 = v6 - v19;
LABEL_28:
    memset_0(v23, v22, v24);
    goto LABEL_29;
  }
  if ( v6 <= v15 )
  {
    v16 = (void *)(*((_QWORD *)this - 45) + v13);
    if ( a2->u32BufferFlags == BUFFER_VALID )
    {
      v17 = v6;
      memcpy_0(v16, *((const void **)this - 41), v6);
    }
    else
    {
      v18 = 0;
      if ( *((_DWORD *)this - 84) == 8 )
        v18 = 128;
      v17 = v6;
      memset_0(v16, v18, v6);
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*((_QWORD *)this - 45) + 8LL), v17);
  }
LABEL_30:
  if ( *((_QWORD *)this - 3) )
  {
    ResetEvent(*((HANDLE *)this - 2));
    SetEvent(*((HANDLE *)this - 3));
    WaitForSingleObject(*((HANDLE *)this - 2), 0xFFFFFFFF);
  }
  *((_DWORD *)this + 4) = 3;
  AEWMILOG_DATA(v11, v4, v12, 0x14u, v8, v9, v6);
}
