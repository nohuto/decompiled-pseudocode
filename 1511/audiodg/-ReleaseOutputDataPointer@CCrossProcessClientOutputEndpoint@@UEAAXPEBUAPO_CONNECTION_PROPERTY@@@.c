/*
 * XREFs of ?ReleaseOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x14003BDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x140017B58 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     memset_0 @ 0x140019034 (memset_0.c)
 *     memcpy_0 @ 0x140019B52 (memcpy_0.c)
 *     ?AEWMILOG_DATA@@YAXKPEAXE_K11@Z @ 0x14003E15C (-AEWMILOG_DATA@@YAXKPEAXE_K11@Z.c)
 */

void __fastcall CCrossProcessClientOutputEndpoint::ReleaseOutputDataPointer(
        CCrossProcessClientOutputEndpoint *this,
        const struct APO_CONNECTION_PROPERTY *a2)
{
  UINT32 u32ValidFrameCount; // ebx
  CCrossProcessBaseEndpoint *v3; // r12
  unsigned int v5; // esi
  signed __int64 v7; // r15
  unsigned __int64 v8; // r13
  __int64 v9; // r8
  unsigned int v10; // edx
  BOOL v11; // ecx
  int v12; // ecx
  unsigned int v13; // ebp
  void *v14; // rcx
  unsigned __int64 v15; // rbx
  int v16; // edx
  unsigned int v17; // ebp
  void *v18; // rcx
  int v19; // edx
  int v20; // edx
  void *v21; // rcx
  size_t v22; // r8
  void *v23; // rcx

  u32ValidFrameCount = a2->u32ValidFrameCount;
  v3 = (CCrossProcessClientOutputEndpoint *)((char *)this - 416);
  v5 = 0;
  v7 = *(_QWORD *)(*((_QWORD *)this - 44) + 8LL);
  v8 = u32ValidFrameCount;
  AEWMILOG_DATA((unsigned int)this, (char *)this - 416, 0x13u, u32ValidFrameCount, v7, 0LL);
  if ( !CCrossProcessBaseEndpoint::IsValidOffset(v3, v7) )
    goto LABEL_30;
  if ( !u32ValidFrameCount )
    goto LABEL_30;
  v9 = *((_QWORD *)this - 43);
  v5 = u32ValidFrameCount * *((_DWORD *)this - 84);
  v10 = *(_DWORD *)(v9 + 140) + v7 % *((unsigned int *)this - 72);
  if ( v10 > *(_DWORD *)(v9 + 144) )
    goto LABEL_30;
  v11 = u32ValidFrameCount < *((_DWORD *)this + 5) && (*((_BYTE *)this - 264) & 1) != 0;
  _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this - 44) + 168LL), v11);
  v12 = *((_DWORD *)this + 4);
  if ( !v12 )
  {
    if ( a2->u32BufferFlags != BUFFER_SILENT )
      goto LABEL_29;
    v21 = (void *)(*((_QWORD *)this - 44) + v10);
    v20 = 0;
    v22 = v5;
    if ( *((_DWORD *)this - 82) == 8 )
      v20 = 128;
    goto LABEL_28;
  }
  if ( v12 != 1 )
    goto LABEL_30;
  v13 = *(_DWORD *)(*((_QWORD *)this - 43) + 144LL);
  if ( v10 + v5 > v13 )
  {
    v17 = v13 - v10;
    v18 = (void *)(*((_QWORD *)this - 44) + v10);
    if ( a2->u32BufferFlags == BUFFER_VALID )
    {
      memcpy_0(v18, *((const void **)this - 40), v17);
      memcpy_0(
        (void *)(*((_QWORD *)this - 44) + *(unsigned int *)(*((_QWORD *)this - 43) + 140LL)),
        (const void *)(v17 + *((_QWORD *)this - 40)),
        v5 - v17);
LABEL_29:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*((_QWORD *)this - 44) + 8LL), v5);
      goto LABEL_30;
    }
    v19 = 0;
    if ( *((_DWORD *)this - 82) == 8 )
      v19 = 128;
    memset_0(v18, v19, v17);
    v20 = 0;
    v21 = (void *)(*((_QWORD *)this - 44) + *(unsigned int *)(*((_QWORD *)this - 43) + 140LL));
    if ( *((_DWORD *)this - 82) == 8 )
      v20 = 128;
    v22 = v5 - v17;
LABEL_28:
    memset_0(v21, v20, v22);
    goto LABEL_29;
  }
  if ( v5 <= v13 )
  {
    v14 = (void *)(*((_QWORD *)this - 44) + v10);
    if ( a2->u32BufferFlags == BUFFER_VALID )
    {
      v15 = v5;
      memcpy_0(v14, *((const void **)this - 40), v5);
    }
    else
    {
      v16 = 0;
      if ( *((_DWORD *)this - 82) == 8 )
        v16 = 128;
      v15 = v5;
      memset_0(v14, v16, v5);
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*((_QWORD *)this - 44) + 8LL), v15);
  }
LABEL_30:
  v23 = (void *)*((_QWORD *)this - 2);
  if ( v23 )
    SetEvent(v23);
  *((_DWORD *)this + 4) = 3;
  AEWMILOG_DATA((unsigned int)v23, v3, 0x14u, v8, v7, v5);
}
