/*
 * XREFs of ?DoAcceleration@MouseAccelerator@@QEAAJPEAJ0@Z @ 0x18005A268
 * Callers:
 *     ?OnInputReport@MouseProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180058E80 (-OnInputReport@MouseProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MouseAccelerator::DoAcceleration(MouseAccelerator *this, int *a2, int *a3)
{
  __int64 v5; // rbp
  unsigned int v6; // r10d
  __int64 v7; // rsi
  signed __int64 v9; // r8
  signed __int64 v10; // rcx
  signed __int64 v11; // rax
  bool v12; // cc
  __int64 v13; // rbx
  __int64 *v14; // rcx
  int v15; // edi
  __int64 v16; // r11
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx

  v5 = (__int64)*a3 << 16;
  v6 = 0;
  v7 = (__int64)*a2 << 16;
  v9 = abs64(v5);
  v10 = v9;
  v11 = abs64(v7);
  v12 = v11 <= v9;
  if ( v11 < v9 )
    v9 = v11;
  if ( !v12 )
    v10 = v11;
  v13 = v10 + v9 / 2;
  if ( v13 )
  {
    v14 = (__int64 *)((char *)this + 80);
    v15 = 4;
    do
    {
      if ( v13 <= *v14 )
        break;
      ++v6;
      ++v14;
    }
    while ( v6 < 4 );
    v16 = 0LL;
    if ( v6 )
      v16 = v6 - 1;
    v17 = *((unsigned int *)this + 60);
    v18 = *((_QWORD *)this + v16 + 20) + (*((_QWORD *)this + v16 + 24) << 16) / v13;
    if ( (_DWORD)v17 != (_DWORD)v16 && (unsigned int)v16 > (unsigned int)v17 )
      v18 = (*((_QWORD *)this + (unsigned int)v17 + 20) + (*((_QWORD *)this + v17 + 24) << 16) / v13 + v18) >> 1;
    if ( (unsigned int)v16 < 4 )
      v15 = v16;
    v19 = *((_QWORD *)this + 28) + ((v7 * v18) >> 16);
    *((_DWORD *)this + 60) = v15;
    v20 = -(__int64)(-v19 & 0xFFFFFFFFFFFF0000uLL);
    v21 = *((_QWORD *)this + 29) + ((v5 * v18) >> 16);
    if ( v19 >= 0 )
      v20 = v19 & 0x7FFFFFFFFFFF0000LL;
    *((_QWORD *)this + 28) = v19 - v20;
    *a2 = v20 >> 16;
    v22 = -(__int64)(-v21 & 0xFFFFFFFFFFFF0000uLL);
    if ( v21 >= 0 )
      v22 = v21 & 0x7FFFFFFFFFFF0000LL;
    *((_QWORD *)this + 29) = v21 - v22;
    *a3 = v22 >> 16;
  }
  return 0LL;
}
