/*
 * XREFs of ?QueueDestroySprite@CWindowList@@QEAAJPEAVCWindowData@@@Z @ 0x180032EF8
 * Callers:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180033AB4 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002B384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CWindowList::QueueDestroySprite(CWindowList *this, struct CWindowData *a2)
{
  unsigned int v2; // edi
  unsigned int v3; // eax
  struct CWindowData **i; // r8
  unsigned int v5; // eax
  unsigned int v6; // edx
  unsigned int v7; // ebx
  int v8; // eax
  struct CWindowData *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  v2 = 0;
  v3 = 0;
  for ( i = (struct CWindowData **)*((_QWORD *)this + 31); v3 < *((_DWORD *)this + 68); ++i )
  {
    if ( a2 == *i )
      break;
    ++v3;
  }
  if ( v3 >= *((_DWORD *)this + 68) )
  {
    v5 = *((_DWORD *)this + 68);
    v6 = v5 + 1;
    if ( v5 + 1 < v5 )
    {
      v7 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    }
    else
    {
      v7 = 0;
      if ( v6 <= *((_DWORD *)this + 67) )
      {
        *(_QWORD *)(*((_QWORD *)this + 31) + 8LL * *((unsigned int *)this + 68)) = v10;
        *((_DWORD *)this + 68) = v6;
      }
      else
      {
        v8 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 248, 8u, 1, &v10);
        v7 = v8;
        if ( v8 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0xC0u);
      }
    }
    return v7;
  }
  return v2;
}
