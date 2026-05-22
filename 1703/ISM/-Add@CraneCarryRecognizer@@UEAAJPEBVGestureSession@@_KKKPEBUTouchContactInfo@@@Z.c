/*
 * XREFs of ?Add@CraneCarryRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1800383B0
 * Callers:
 *     <none>
 * Callees:
 *     ?RefreshScreenSize@GestureSession@@SAJXZ @ 0x180036F1C (-RefreshScreenSize@GestureSession@@SAJXZ.c)
 *     ?IndexOfContactWithId@@YA_NPEBUTouchContactInfo@@HHPEAH@Z @ 0x18003A770 (-IndexOfContactWithId@@YA_NPEBUTouchContactInfo@@HHPEAH@Z.c)
 *     floor @ 0x18009D802 (floor.c)
 *     sqrt @ 0x18009D820 (sqrt.c)
 */

__int64 __fastcall CraneCarryRecognizer::Add(
        CraneCarryRecognizer *this,
        const struct GestureSession *a2,
        __int64 a3,
        __int64 a4,
        signed int a5,
        const struct TouchContactInfo *a6)
{
  int v6; // esi
  int refreshed; // ebp
  int v9; // esi
  unsigned int v10; // r12d
  signed int v11; // r14d
  const struct TouchContactInfo *v12; // rdi
  _DWORD *v13; // r15
  int v14; // eax
  double v15; // xmm0_8
  unsigned int v16; // eax
  int v18; // r8d
  int v19; // esi
  int v20; // edi
  int v21; // eax
  int v22; // [rsp+50h] [rbp+8h] BYREF

  v6 = *((_DWORD *)this + 4);
  v22 = 0;
  refreshed = 0;
  if ( (unsigned int)(v6 - 3) <= 1 )
    return 0LL;
  if ( v6 != 2 )
  {
    v18 = *((_DWORD *)this + 7);
    if ( v18 != 0xFFFF )
    {
      v12 = a6;
      if ( IndexOfContactWithId(a6, a5, v18, &v22) )
      {
        v9 = v22;
        goto LABEL_21;
      }
      if ( v6 && *((_WORD *)this + 22) )
        *((_DWORD *)this + 4) = 2;
      else
        *((_DWORD *)this + 4) = 4;
      *((_BYTE *)this + 20) = 1;
    }
    return 0LL;
  }
  v9 = -1;
  v10 = 0;
  v11 = 0;
  if ( a5 <= 0 )
    return 0LL;
  v12 = a6;
  v13 = (_DWORD *)((char *)a6 + 4);
  do
  {
    if ( (*(_BYTE *)(v13 - 1) & 8) != 0 )
    {
      v14 = v13[1] - *((_DWORD *)this + 9);
      v15 = sqrt((float)((*v13 - *((_DWORD *)this + 8)) * (*v13 - *((_DWORD *)this + 8)) + v14 * v14));
      v16 = (int)floor(v15);
      if ( v9 == -1 || v16 < v10 )
      {
        v9 = v11;
        v10 = v16;
      }
    }
    ++v11;
    v13 += 10;
  }
  while ( v11 < a5 );
  if ( v9 == -1 || v10 > *((unsigned __int16 *)this + 23) )
    return 0LL;
LABEL_21:
  *((_DWORD *)this + 4) = 1;
  *((_DWORD *)this + 10) = *((_DWORD *)v12 + 10 * v9 + 5);
  *((_QWORD *)this + 4) = *(_QWORD *)((char *)v12 + 40 * v9 + 4);
  if ( !*((_WORD *)this + 24) )
  {
    if ( (*((_BYTE *)v12 + 40 * v9) & 1) != 0 )
    {
      *((_BYTE *)this + 20) = 1;
      *((_DWORD *)this + 4) = 4;
    }
    goto LABEL_34;
  }
  v19 = 0;
  v20 = 0;
  if ( !GestureSession::s_refreshScreenSize )
    goto LABEL_25;
  refreshed = GestureSession::RefreshScreenSize();
  if ( refreshed >= 0 )
  {
    GestureSession::s_refreshScreenSize = 0;
LABEL_25:
    v19 = GestureSession::s_horizontalResolution;
    refreshed = 0;
    v20 = GestureSession::s_verticalResolution;
  }
  if ( refreshed >= 0 )
  {
    v21 = *((unsigned __int16 *)this + 24);
    if ( *((_DWORD *)this + 8) < v21
      || *((_DWORD *)this + 8) > v19 - v21
      || *((_DWORD *)this + 9) < v21
      || *((_DWORD *)this + 9) > v20 - v21 )
    {
      *((_DWORD *)this + 4) = 3;
    }
  }
LABEL_34:
  *((_BYTE *)this + 20) = 1;
  return (unsigned int)refreshed;
}
