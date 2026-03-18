/*
 * XREFs of ?BuildHeatMap@CPrimitiveGroup@@AEAAJXZ @ 0x18010BE3C
 * Callers:
 *     ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006E1D0 (-Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF.c)
 *     ?ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ @ 0x18006EBDC (-ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ.c)
 * Callees:
 *     ?CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18005E638 (-CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ @ 0x18006E528 (-ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memcpy_0 @ 0x180099BBA (memcpy_0.c)
 */

__int64 __fastcall CPrimitiveGroup::BuildHeatMap(CPrimitiveGroup *this)
{
  unsigned int v1; // ebp
  unsigned int v3; // r14d
  _QWORD *v4; // r12
  int v5; // eax
  void *v6; // rax
  _QWORD *v7; // r13
  int v8; // eax
  void *v10; // rax
  unsigned int v11; // r15d
  __int64 v12; // rax
  __int64 v13; // rcx
  _DWORD *v14; // rcx
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // [rsp+60h] [rbp+8h]

  v1 = 0;
  v3 = 0;
  CPrimitiveGroup::ReleaseHeatMap(this);
  if ( *((_QWORD *)this + 44) && *((_QWORD *)this + 46) )
  {
    v4 = (_QWORD *)((char *)this + 520);
    v5 = CD2DSharedBuffer::CreateFromHeap(*((_DWORD *)this + 90), (struct ID2D1PrivateCompositorBuffer **)this + 65);
    v3 = v5;
    if ( v5 >= 0 )
    {
      v6 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 24LL))(*v4);
      memcpy_0(v6, *((const void **)this + 44), *((_QWORD *)this + 45));
      v7 = (_QWORD *)((char *)this + 528);
      v8 = CD2DSharedBuffer::CreateFromHeap(*((_DWORD *)this + 94), (struct ID2D1PrivateCompositorBuffer **)this + 66);
      v3 = v8;
      if ( v8 >= 0 )
      {
        v10 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 24LL))(*v7);
        memcpy_0(v10, *((const void **)this + 46), *((_QWORD *)this + 47));
        v11 = 0;
        v18 = *((_QWORD *)this + 45);
        v12 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 24LL))(*v4);
        while ( v11 + 144 <= (unsigned int)v18 )
        {
          v13 = v11;
          v11 += 144;
          v14 = (_DWORD *)(v12 + v13);
          v14[1] &= ~0x20u;
          v14[2] = -1;
          v14[3] = 0;
          v14[10] = -1;
          v14[14] = -1;
        }
        v15 = *((_QWORD *)this + 47);
        v16 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 24LL))(*v7);
        while ( v1 + 148 <= (unsigned int)v15 )
        {
          v17 = v1;
          v1 += 148;
          *(_OWORD *)(v17 + v16 + 48) = *(_OWORD *)((char *)this + 504);
          *(_DWORD *)(v17 + v16 + 144) = -1;
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x5F5u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x5F0u);
    }
  }
  return v3;
}
