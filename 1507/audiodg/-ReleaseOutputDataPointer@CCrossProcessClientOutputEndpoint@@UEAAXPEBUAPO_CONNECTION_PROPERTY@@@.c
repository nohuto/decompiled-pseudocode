/*
 * XREFs of ?ReleaseOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x14003BE00
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1400190F4 (memset_0.c)
 *     memcpy_0 @ 0x140019C12 (memcpy_0.c)
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x140025CCC (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     ?AEWMILOG_DATA@@YAXKPEAXE_K11@Z @ 0x14003E3E0 (-AEWMILOG_DATA@@YAXKPEAXE_K11@Z.c)
 */

void __fastcall CCrossProcessClientOutputEndpoint::ReleaseOutputDataPointer(
        CCrossProcessClientOutputEndpoint *this,
        const struct APO_CONNECTION_PROPERTY *a2)
{
  UINT32 u32ValidFrameCount; // ebp
  CCrossProcessBaseEndpoint *v3; // r15
  unsigned __int64 v6; // r12
  unsigned int v7; // esi
  signed __int64 v8; // r14
  __int64 v9; // r8
  unsigned int v10; // edx
  unsigned int v11; // ebp
  int v12; // ecx
  void *v13; // rcx
  unsigned __int64 v14; // rbx
  int v15; // edx
  unsigned int v16; // ebp
  void *v17; // rcx
  int v18; // edx
  int v19; // edx
  void *v20; // rcx
  size_t v21; // r8
  void *v22; // rcx

  u32ValidFrameCount = a2->u32ValidFrameCount;
  v3 = (CCrossProcessClientOutputEndpoint *)((char *)this - 416);
  v6 = u32ValidFrameCount;
  AEWMILOG_DATA((unsigned int)this, (char *)this - 416, 0x13u, u32ValidFrameCount, 0LL, 0LL);
  v7 = 0;
  v8 = *(_QWORD *)(*((_QWORD *)this - 44) + 8LL);
  if ( !CCrossProcessBaseEndpoint::IsValidOffset(v3, v8) )
    goto LABEL_26;
  if ( !u32ValidFrameCount )
    goto LABEL_26;
  v9 = *((_QWORD *)this - 43);
  v7 = u32ValidFrameCount * *((_DWORD *)this - 84);
  v10 = *(_DWORD *)(v9 + 140) + v8 % *((unsigned int *)this - 72);
  v11 = *(_DWORD *)(v9 + 144);
  if ( v10 > v11 )
    goto LABEL_26;
  v12 = *((_DWORD *)this + 4);
  if ( !v12 )
  {
    if ( a2->u32BufferFlags != BUFFER_SILENT )
      goto LABEL_25;
    v20 = (void *)(*((_QWORD *)this - 44) + v10);
    v19 = 0;
    v21 = v7;
    if ( *((_DWORD *)this - 82) == 8 )
      v19 = 128;
    goto LABEL_24;
  }
  if ( v12 != 1 )
    goto LABEL_26;
  if ( v10 + v7 > v11 )
  {
    v16 = v11 - v10;
    v17 = (void *)(*((_QWORD *)this - 44) + v10);
    if ( a2->u32BufferFlags == BUFFER_VALID )
    {
      memcpy_0(v17, *((const void **)this - 40), v16);
      memcpy_0(
        (void *)(*((_QWORD *)this - 44) + *(unsigned int *)(*((_QWORD *)this - 43) + 140LL)),
        (const void *)(v16 + *((_QWORD *)this - 40)),
        v7 - v16);
LABEL_25:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*((_QWORD *)this - 44) + 8LL), v7);
      goto LABEL_26;
    }
    v18 = 0;
    if ( *((_DWORD *)this - 82) == 8 )
      v18 = 128;
    memset_0(v17, v18, v16);
    v19 = 0;
    v20 = (void *)(*((_QWORD *)this - 44) + *(unsigned int *)(*((_QWORD *)this - 43) + 140LL));
    if ( *((_DWORD *)this - 82) == 8 )
      v19 = 128;
    v21 = v7 - v16;
LABEL_24:
    memset_0(v20, v19, v21);
    goto LABEL_25;
  }
  if ( v7 <= v11 )
  {
    v13 = (void *)(*((_QWORD *)this - 44) + v10);
    if ( a2->u32BufferFlags == BUFFER_VALID )
    {
      v14 = v7;
      memcpy_0(v13, *((const void **)this - 40), v7);
    }
    else
    {
      v15 = 0;
      if ( *((_DWORD *)this - 82) == 8 )
        v15 = 128;
      v14 = v7;
      memset_0(v13, v15, v7);
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*((_QWORD *)this - 44) + 8LL), v14);
  }
LABEL_26:
  v22 = (void *)*((_QWORD *)this - 2);
  if ( v22 )
    SetEvent(v22);
  *((_DWORD *)this + 4) = 3;
  AEWMILOG_DATA((unsigned int)v22, v3, 0x14u, v6, v8, v7);
}
