/*
 * XREFs of ?ReleaseOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x1400175F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x1400171B4 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     __security_check_cookie @ 0x140018370 (__security_check_cookie.c)
 *     memcpy_0 @ 0x140019602 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?AEWMILOG_DATA@@YAXKPEAXEE_K11@Z @ 0x14003C104 (-AEWMILOG_DATA@@YAXKPEAXEE_K11@Z.c)
 */

void __fastcall CCrossProcessServerOutputEndpoint::ReleaseOutputDataPointer(
        CCrossProcessServerOutputEndpoint *this,
        const struct APO_CONNECTION_PROPERTY *a2,
        unsigned __int8 a3)
{
  CCrossProcessBaseEndpoint *v3; // r12
  unsigned __int8 v6; // r8
  UINT32 u32ValidFrameCount; // ebx
  unsigned int v8; // ecx
  __int64 v9; // r15
  APO_BUFFER_FLAGS u32BufferFlags; // r8d
  unsigned int v11; // r13d
  unsigned int v12; // esi
  unsigned int v13; // r13d
  unsigned int v14; // r8d
  __int64 v15; // rcx
  __int64 v16; // r9
  __int128 v17; // xmm1
  unsigned int v18; // r15d
  __int128 v19; // [rsp+40h] [rbp-30h] BYREF
  __int128 v20; // [rsp+50h] [rbp-20h]
  __int64 v21; // [rsp+60h] [rbp-10h]

  v3 = (CCrossProcessServerOutputEndpoint *)((char *)this - 440);
  AEWMILOG_DATA((unsigned int)this, (char *)this - 440, a3, 0xBu, a2->u32ValidFrameCount, 0LL, 0LL);
  u32ValidFrameCount = a2->u32ValidFrameCount;
  v8 = *(_DWORD *)(*((_QWORD *)this - 47) + 156LL);
  if ( u32ValidFrameCount )
  {
    v8 = *(_DWORD *)(*((_QWORD *)this - 47) + 156LL) & 1;
    if ( (_BYTE)v8 )
    {
      v9 = *(_QWORD *)(*((_QWORD *)this - 47) + 8LL);
      if ( CCrossProcessBaseEndpoint::IsValidOffset(v3, v9, v6) )
      {
        u32BufferFlags = a2->u32BufferFlags;
        if ( u32BufferFlags )
        {
          v16 = *((_QWORD *)this - 46);
          v17 = *(_OWORD *)((char *)this + 104);
          v8 = *((_DWORD *)this + 4);
          v12 = u32ValidFrameCount * *((_DWORD *)this - 90);
          v18 = *(_DWORD *)(v16 + 140) + v9 % *((unsigned int *)this - 78);
          v19 = *(_OWORD *)((char *)this + 88);
          v21 = *((_QWORD *)this + 15);
          v20 = v17;
          if ( v8 )
          {
            if ( v8 == 1 )
            {
              v11 = *(_DWORD *)(v16 + 144);
              if ( *((_DWORD *)this + 20) )
                v12 = *((_DWORD *)this + 20);
              if ( v18 + v12 > v11 )
              {
                v13 = v11 - v18;
                if ( u32BufferFlags != BUFFER_SILENT )
                {
                  memcpy_0((void *)(*((_QWORD *)this - 47) + v18), *((const void **)this - 43), v13);
                  memcpy_0(
                    (void *)(*((_QWORD *)this - 47) + *(unsigned int *)(*((_QWORD *)this - 46) + 140LL)),
                    (const void *)(v13 + *((_QWORD *)this - 43)),
                    v12 - v13);
                }
                (*(void (__fastcall **)(CCrossProcessBaseEndpoint *, __int64, _QWORD, _QWORD, __int128 *, APO_BUFFER_FLAGS, _DWORD))(*(_QWORD *)v3 + 88LL))(
                  v3,
                  1LL,
                  v18,
                  v13 / *((_DWORD *)this - 90),
                  &v19,
                  a2->u32BufferFlags,
                  0);
                v14 = *((_DWORD *)this - 90);
                HIDWORD(v21) = 2;
                *(_QWORD *)&v20 = v20 - v13 / v14;
                v15 = *(_QWORD *)v3;
                *((_QWORD *)&v20 + 1) += (unsigned int)(int)((double)(int)v13
                                                           / (double)(int)v14
                                                           * 10000000.0
                                                           / *((float *)this - 77)
                                                           + 0.5);
                (*(void (__fastcall **)(CCrossProcessBaseEndpoint *, __int64, _QWORD, _QWORD, __int128 *, APO_BUFFER_FLAGS, _DWORD))(v15 + 88))(
                  v3,
                  1LL,
                  *(unsigned int *)(*((_QWORD *)this - 46) + 140LL),
                  (v12 - v13) / v14,
                  &v19,
                  a2->u32BufferFlags,
                  0);
                v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)(*((_QWORD *)this - 47) + 8LL), v12);
              }
              else
              {
                if ( u32BufferFlags != BUFFER_SILENT )
                  memcpy_0((void *)(*((_QWORD *)this - 47) + v18), *((const void **)this - 43), v12);
                _InterlockedExchangeAdd64((volatile signed __int64 *)(*((_QWORD *)this - 47) + 8LL), v12);
                (*(void (__fastcall **)(CCrossProcessBaseEndpoint *, __int64, _QWORD, _QWORD, __int128 *, APO_BUFFER_FLAGS, _DWORD))(*(_QWORD *)v3 + 88LL))(
                  v3,
                  1LL,
                  v18,
                  v12 / *((_DWORD *)this - 90),
                  &v19,
                  a2->u32BufferFlags,
                  0);
              }
            }
          }
          else
          {
            (*(void (__fastcall **)(CCrossProcessBaseEndpoint *, __int64, _QWORD, _QWORD, __int128 *, APO_BUFFER_FLAGS, int))(*(_QWORD *)v3 + 88LL))(
              v3,
              1LL,
              v18,
              u32ValidFrameCount,
              &v19,
              u32BufferFlags,
              1);
            if ( a2->u32BufferFlags )
              _InterlockedExchangeAdd64((volatile signed __int64 *)(*((_QWORD *)this - 47) + 8LL), v12);
          }
        }
      }
    }
  }
  *((_DWORD *)this + 4) = 3;
  AEWMILOG_DATA(v8, v3, a2->u32ValidFrameCount, 0xCu, a2->u32ValidFrameCount, 0LL, a2->u32BufferFlags);
  SetEvent(*((HANDLE *)this - 40));
}
