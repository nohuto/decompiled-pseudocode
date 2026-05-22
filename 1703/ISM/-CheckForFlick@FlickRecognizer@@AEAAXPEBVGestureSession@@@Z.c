/*
 * XREFs of ?CheckForFlick@FlickRecognizer@@AEAAXPEBVGestureSession@@@Z @ 0x180037AD4
 * Callers:
 *     ?Add@FlickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x180037970 (-Add@FlickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FlickRecognizer::CheckForFlick(FlickRecognizer *this, const struct GestureSession *a2)
{
  char v2; // r9
  __int64 v5; // rax
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rdi
  int v9; // r10d
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rax
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  unsigned int v17; // ecx
  __int64 v18; // [rsp+0h] [rbp-28h]
  __int64 v19; // [rsp+10h] [rbp-18h]

  v2 = *((_BYTE *)this + 138);
  if ( (v2 & 1) == 0 )
  {
    v5 = *((unsigned __int8 *)this + 137);
    v6 = *((unsigned __int8 *)this + 136);
    v7 = *((unsigned __int8 *)this + 136);
    v8 = 3 * v5;
    v9 = *((_DWORD *)this + 3 * v5 + 6);
    while ( v9 - *((_DWORD *)this + 3 * v7 + 6) > (unsigned int)*((unsigned __int16 *)this + 80) )
    {
      v10 = v7 + 1;
      v11 = v6 + 1;
      v6 = 0;
      if ( v10 != 10 )
        v6 = v11;
      v12 = 0LL;
      if ( v10 != 10 )
        v12 = v10;
      v7 = v12;
    }
    v18 = *(_QWORD *)((char *)this + 12 * v6 + 16);
    v13 = v9 - *((_DWORD *)this + 3 * v6 + 6);
    v19 = *(_QWORD *)((char *)this + 4 * v8 + 16);
    if ( v13 > 0 )
    {
      *((_DWORD *)this + 37) = 1000 * ((int)v19 - (int)v18) / v13;
      *((_DWORD *)this + 38) = 1000 * (HIDWORD(v19) - HIDWORD(v18)) / v13;
      if ( (*((_BYTE *)a2 + 198) & 2) != 0 )
        v14 = *((_DWORD *)a2 + 60);
      else
        LOBYTE(v14) = 0;
      v15 = (unsigned __int8)v14 & (unsigned __int8)*((_DWORD *)a2 + 3) & 0x30;
      if ( v15 == 16 )
      {
        *((_DWORD *)this + 38) = 0;
      }
      else
      {
        v16 = *((_DWORD *)this + 37);
        if ( v15 == 32 )
          v16 = 0;
        *((_DWORD *)this + 37) = v16;
      }
      if ( (v2 & 2) != 0 )
      {
        v17 = *((unsigned __int16 *)this + 78);
        if ( abs32(*((_DWORD *)this + 37)) >= v17 || abs32(*((_DWORD *)this + 38)) >= v17 )
          *((_BYTE *)this + 138) = v2 | 4;
      }
    }
  }
}
