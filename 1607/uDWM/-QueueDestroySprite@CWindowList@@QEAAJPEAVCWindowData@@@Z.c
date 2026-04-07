/*
 * XREFs of ?QueueDestroySprite@CWindowList@@QEAAJPEAVCWindowData@@@Z @ 0x180032CB4
 * Callers:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x1800282A4 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18002AA90 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowList::QueueDestroySprite(CWindowList *this, struct CWindowData *a2)
{
  unsigned int v2; // esi
  char *v3; // rbx
  unsigned int v4; // eax
  struct CWindowData **i; // r8
  unsigned int v6; // eax
  unsigned int v7; // edx
  int v8; // edi
  struct CWindowData **v10; // [rsp+40h] [rbp+8h] BYREF
  struct CWindowData *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v2 = 0;
  v3 = (char *)this + 248;
  v4 = 0;
  for ( i = (struct CWindowData **)*((_QWORD *)this + 31); v4 < *((_DWORD *)this + 68); ++i )
  {
    if ( a2 == *i )
      break;
    ++v4;
  }
  if ( v4 >= *((_DWORD *)this + 68) )
  {
    v6 = *((_DWORD *)this + 68);
    v7 = v6 + 1;
    if ( v6 + 1 < v6 )
    {
      v8 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    else
    {
      v8 = 0;
      if ( v7 <= *((_DWORD *)this + 67) )
      {
        *(_QWORD *)(*(_QWORD *)v3 + 8LL * *((unsigned int *)this + 68)) = v11;
        *((_DWORD *)this + 68) = v7;
      }
      else
      {
        v10 = &v11;
        v8 = DynArrayImpl<0>::Grow((__int64)this + 248, 8u, 1, 0, (unsigned __int64 *)&v10);
        if ( v8 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xC0u);
        else
          *(_QWORD *)(*(_QWORD *)v3 + (unsigned int)(8 * (*((_DWORD *)v3 + 6))++)) = *v10;
      }
    }
    return (unsigned int)v8;
  }
  return v2;
}
