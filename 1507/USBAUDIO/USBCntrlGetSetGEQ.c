/*
 * XREFs of USBCntrlGetSetGEQ @ 0x1C0020C20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001DE8 (WPP_RECORDER_SF_.c)
 *     USBHwGetSetProperty @ 0x1C001C5B8 (USBHwGetSetProperty.c)
 */

__int64 __fastcall USBCntrlGetSetGEQ(__int64 a1, __int64 a2, int a3, __int64 a4, unsigned int a5, int a6)
{
  unsigned int v6; // ebx
  __int64 v7; // r14
  int SetProperty; // r13d
  unsigned int v10; // r15d
  _DWORD *PoolWithTag; // rsi
  _BYTE *v12; // rcx
  __int64 v13; // r9
  int *v14; // r8
  int v15; // eax
  bool v16; // zf
  unsigned int i; // ecx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v21; // rax
  __int64 v25; // [rsp+B8h] [rbp+20h]

  v6 = 0;
  v7 = *(_QWORD *)(a2 + 128);
  SetProperty = -1073741670;
  v10 = 30;
  v25 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  if ( *(_DWORD *)(v7 + 40LL * a5 + 12) )
    v10 = *(_DWORD *)(v7 + 40LL * a5 + 12);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPool, v10 + 4, 0x41627845u);
  if ( PoolWithTag )
  {
    if ( a6 == 1 )
    {
      if ( a3 != 4 * v10 )
      {
        ExFreePool(PoolWithTag);
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          9u,
          0xCu,
          (__int64)&WPP_021b488036268cf1de9396c5e1237405_Traceguids);
        return 3221225990LL;
      }
      *PoolWithTag = *(_DWORD *)(v7 + 40LL * a5 + 16);
      v12 = PoolWithTag + 1;
      v13 = v10;
      v14 = (int *)a4;
      do
      {
        v15 = *v14++;
        *v12++ = v15 / 0x4000;
        --v13;
      }
      while ( v13 );
    }
    SetProperty = USBHwGetSetProperty(
                    a1,
                    27,
                    a6 != 1,
                    a6,
                    6,
                    *(_WORD *)(v7 + 40LL * a5 + 8),
                    *(_WORD *)(a2 + 80),
                    *(unsigned __int8 *)(*(_QWORD *)(v25 + 48) + 2LL),
                    (__int64)PoolWithTag,
                    v10 + 4);
    if ( SetProperty >= 0 )
    {
      if ( (a6 & 0x80u) == 0 )
      {
        if ( *(_DWORD *)(v7 + 40LL * a5 + 12) )
        {
          do
          {
            v21 = v6++;
            *(_DWORD *)(*(_QWORD *)(v7 + 40LL * a5 + 32) + 20 * v21) = *(_DWORD *)(a4 + 4 * v21);
          }
          while ( v6 < *(_DWORD *)(v7 + 40LL * a5 + 12) );
        }
      }
      else
      {
        v16 = *(_DWORD *)a4 == 0;
        if ( !*(_DWORD *)a4 )
        {
          *(_DWORD *)(a4 + 4) = *PoolWithTag;
          for ( i = 0; i < 0x1E; ++i )
          {
            v18 = *PoolWithTag;
            if ( _bittest(&v18, i) )
              ++*(_DWORD *)a4;
          }
          v16 = *(_DWORD *)a4 == 0;
        }
        if ( !v16 )
        {
          do
          {
            v19 = v6++;
            *(_DWORD *)(*(_QWORD *)(a4 + 16) + 4 * v19) = *((char *)PoolWithTag + v19 + 4) << 14;
          }
          while ( v6 < *(_DWORD *)a4 );
        }
      }
    }
    ExFreePool(PoolWithTag);
  }
  return (unsigned int)SetProperty;
}
