/*
 * XREFs of ?EndFrame@CD3DResourceManager@@QEAAXXZ @ 0x1800E0A64
 * Callers:
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJI_N@Z @ 0x180055E64 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJI_N@Z.c)
 * Callees:
 *     ??_GCD3DResourceSourceReference@@QEAAPEAXI@Z @ 0x18013AD74 (--_GCD3DResourceSourceReference@@QEAAPEAXI@Z.c)
 */

void __fastcall CD3DResourceManager::EndFrame(CD3DResourceManager *this)
{
  char *v1; // rdx
  char *v2; // r8
  char **v3; // r9
  __int64 v4; // r8
  char *v5; // rdi
  char *v6; // rbx
  CD3DResourceSourceReference *v7; // rcx
  CD3DResourceSourceReference **v8; // r8
  CD3DResourceSourceReference **v9; // rdx

  v1 = (char *)this + 64;
  if ( *(char **)v1 != v1 )
  {
    v2 = (char *)this + 48;
    v3 = (char **)*((_QWORD *)this + 7);
    if ( *(CD3DResourceManager **)(*((_QWORD *)this + 6) + 8LL) != (CD3DResourceManager *)((char *)this + 48)
      || *v3 != v2 )
    {
      __fastfail(3u);
    }
    if ( *(char **)(*(_QWORD *)v1 + 8LL) != v1 || **((char ***)this + 9) != v1 )
      __fastfail(3u);
    *v3 = v1;
    *((_QWORD *)this + 7) = *((_QWORD *)this + 9);
    **((_QWORD **)this + 9) = v2;
    *((_QWORD *)this + 9) = v3;
    v4 = *(_QWORD *)v1;
    if ( *(char **)(*(_QWORD *)v1 + 8LL) != v1 || *v3 != v1 )
      __fastfail(3u);
    *v3 = (char *)v4;
    *(_QWORD *)(v4 + 8) = v3;
    *((_QWORD *)this + 9) = (char *)this + 64;
    *(_QWORD *)v1 = v1;
  }
  v5 = (char *)this + 104;
  v6 = (char *)*((_QWORD *)this + 13);
  while ( v6 != v5 )
  {
    v7 = (CD3DResourceSourceReference *)(v6 - 16);
    v6 = *(char **)v6;
    if ( (int)--*((_DWORD *)v7 + 2) <= 0 )
    {
      v8 = (CD3DResourceSourceReference **)*((_QWORD *)v7 + 2);
      v9 = (CD3DResourceSourceReference **)*((_QWORD *)v7 + 3);
      if ( v8[1] != (CD3DResourceSourceReference *)((char *)v7 + 16)
        || *v9 != (CD3DResourceSourceReference *)((char *)v7 + 16) )
      {
        __fastfail(3u);
      }
      *v9 = (CD3DResourceSourceReference *)v8;
      v8[1] = (CD3DResourceSourceReference *)v9;
      CD3DResourceSourceReference::`scalar deleting destructor'(v7, (unsigned int)v9);
    }
  }
}
