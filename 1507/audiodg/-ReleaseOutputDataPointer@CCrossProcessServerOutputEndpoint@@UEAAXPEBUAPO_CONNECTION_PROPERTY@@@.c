/*
 * XREFs of ?ReleaseOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x14003C8B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140018F00 (__security_check_cookie.c)
 *     memcpy_0 @ 0x140019C12 (memcpy_0.c)
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x140025CCC (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AEWMILOG_DATA@@YAXKPEAXE_K11@Z @ 0x14003E3E0 (-AEWMILOG_DATA@@YAXKPEAXE_K11@Z.c)
 */

void __fastcall CCrossProcessServerOutputEndpoint::ReleaseOutputDataPointer(
        CCrossProcessServerOutputEndpoint *this,
        const struct APO_CONNECTION_PROPERTY *a2)
{
  CCrossProcessBaseEndpoint *v2; // r12
  UINT32 u32ValidFrameCount; // edi
  unsigned int v6; // ecx
  __int64 v7; // rbx
  APO_BUFFER_FLAGS u32BufferFlags; // r8d
  __int64 v9; // r9
  __int128 v10; // xmm1
  unsigned int v11; // r15d
  unsigned int v12; // esi
  unsigned int v13; // edi
  unsigned int v14; // edi
  unsigned int v15; // r8d
  __int64 v16; // rdi
  void (__fastcall *v17)(CCrossProcessBaseEndpoint *, __int64, _QWORD, _QWORD, unsigned __int64 *, APO_BUFFER_FLAGS, _DWORD); // rsi
  int v18; // [rsp+40h] [rbp-40h]
  unsigned __int64 v19[2]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v20; // [rsp+58h] [rbp-28h]
  __int64 v21; // [rsp+68h] [rbp-18h]

  v2 = (CCrossProcessServerOutputEndpoint *)((char *)this - 440);
  AEWMILOG_DATA((unsigned int)this, (char *)this - 440, 0xBu, a2->u32ValidFrameCount, 0LL, 0LL);
  u32ValidFrameCount = a2->u32ValidFrameCount;
  v6 = *(_DWORD *)(*((_QWORD *)this - 47) + 156LL);
  if ( u32ValidFrameCount )
  {
    v6 = *(_DWORD *)(*((_QWORD *)this - 47) + 156LL) & 1;
    if ( (_BYTE)v6 )
    {
      v7 = *(_QWORD *)(*((_QWORD *)this - 47) + 8LL);
      if ( CCrossProcessBaseEndpoint::IsValidOffset(v2, v7) )
      {
        u32BufferFlags = a2->u32BufferFlags;
        if ( u32BufferFlags )
        {
          v9 = *((_QWORD *)this - 46);
          v10 = *(_OWORD *)((char *)this + 104);
          v6 = *((_DWORD *)this + 4);
          v11 = u32ValidFrameCount * *((_DWORD *)this - 90);
          v12 = *(_DWORD *)(v9 + 140) + v7 % *((unsigned int *)this - 78);
          *(_OWORD *)v19 = *(_OWORD *)((char *)this + 88);
          v21 = *((_QWORD *)this + 15);
          v20 = v10;
          if ( v6 )
          {
            if ( v6 == 1 )
            {
              v13 = *(_DWORD *)(v9 + 144);
              if ( *((_DWORD *)this + 20) )
                v11 = *((_DWORD *)this + 20);
              if ( v12 + v11 > v13 )
              {
                v14 = v13 - v12;
                v18 = v14;
                if ( u32BufferFlags != BUFFER_SILENT )
                {
                  memcpy_0((void *)(*((_QWORD *)this - 47) + v12), *((const void **)this - 43), v14);
                  memcpy_0(
                    (void *)(*((_QWORD *)this - 47) + *(unsigned int *)(*((_QWORD *)this - 46) + 140LL)),
                    (const void *)(v14 + *((_QWORD *)this - 43)),
                    v11 - v14);
                }
                (*(void (__fastcall **)(CCrossProcessBaseEndpoint *, __int64, _QWORD, _QWORD, unsigned __int64 *, APO_BUFFER_FLAGS, _DWORD))(*(_QWORD *)v2 + 88LL))(
                  v2,
                  1LL,
                  v12,
                  v14 / *((_DWORD *)this - 90),
                  v19,
                  a2->u32BufferFlags,
                  0);
                v15 = *((_DWORD *)this - 90);
                v16 = *((_QWORD *)this - 46);
                HIDWORD(v21) = 2;
                *(_QWORD *)&v20 = v20 - v18 / v15;
                v17 = *(void (__fastcall **)(CCrossProcessBaseEndpoint *, __int64, _QWORD, _QWORD, unsigned __int64 *, APO_BUFFER_FLAGS, _DWORD))(*(_QWORD *)v2 + 88LL);
                *((_QWORD *)&v20 + 1) += (unsigned int)(int)((double)v18
                                                           / (double)(int)v15
                                                           * 10000000.0
                                                           / *((float *)this - 77)
                                                           + 0.5);
                v17(v2, 1LL, *(unsigned int *)(v16 + 140), (v11 - v18) / v15, v19, a2->u32BufferFlags, 0);
                v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)(*((_QWORD *)this - 47) + 8LL), v11);
              }
              else
              {
                if ( u32BufferFlags != BUFFER_SILENT )
                  memcpy_0((void *)(*((_QWORD *)this - 47) + v12), *((const void **)this - 43), v11);
                _InterlockedExchangeAdd64((volatile signed __int64 *)(*((_QWORD *)this - 47) + 8LL), v11);
                (*(void (__fastcall **)(CCrossProcessBaseEndpoint *, __int64, _QWORD, _QWORD, unsigned __int64 *, APO_BUFFER_FLAGS, _DWORD))(*(_QWORD *)v2 + 88LL))(
                  v2,
                  1LL,
                  v12,
                  v11 / *((_DWORD *)this - 90),
                  v19,
                  a2->u32BufferFlags,
                  0);
              }
            }
          }
          else
          {
            (*(void (__fastcall **)(CCrossProcessBaseEndpoint *, __int64, _QWORD, _QWORD, unsigned __int64 *, APO_BUFFER_FLAGS, int))(*(_QWORD *)v2 + 88LL))(
              v2,
              1LL,
              v12,
              u32ValidFrameCount,
              v19,
              u32BufferFlags,
              1);
            if ( a2->u32BufferFlags )
              _InterlockedExchangeAdd64((volatile signed __int64 *)(*((_QWORD *)this - 47) + 8LL), v11);
          }
        }
      }
    }
  }
  *((_DWORD *)this + 4) = 3;
  AEWMILOG_DATA(v6, v2, 0xCu, a2->u32ValidFrameCount, 0LL, a2->u32BufferFlags);
  SetEvent(*((HANDLE *)this - 40));
}
