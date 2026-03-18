/*
 * XREFs of ?LogCddDatabaseAccessPacket@@YAXHJPEAU_D3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z @ 0x1C0181DE4
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00A23F8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00A2778 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DxgkWriteDiagEntry @ 0x1C00A68F0 (DxgkWriteDiagEntry.c)
 */

void __fastcall LogCddDatabaseAccessPacket(
        int a1,
        int a2,
        struct _D3DKMT_GETPATHSMODALITY *a3,
        struct _STRING *a4,
        unsigned int a5)
{
  unsigned int v8; // r14d
  _DWORD *v10; // rax
  unsigned int v11; // esi
  _DWORD *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  char *v15; // rbx

  v8 = (*((unsigned __int16 *)a3 + 10) << 7) + a4->Length + 73;
  v10 = operator new[](v8, 0x63644356u, PagedPool);
  v11 = 0;
  v12 = v10;
  if ( v10 )
  {
    memset(v10, 0, v8);
    *v12 = 17;
    v12[1] = v8;
    v12[10] = 0;
    *((_QWORD *)v12 + 4) = 0LL;
    *((_QWORD *)v12 + 1) = 0LL;
    *((_QWORD *)v12 + 2) = 0LL;
    *((_QWORD *)v12 + 3) = 0LL;
    v12[13] = a5;
    v12[12] = a2;
    v12[14] = a1;
    v12[15] = *((unsigned __int16 *)a3 + 10);
    if ( *((_WORD *)a3 + 10) )
    {
      do
      {
        v13 = v11++;
        v14 = 216 * v13;
        v13 <<= 7;
        *(_DWORD *)((char *)v12 + v13 + 72) = *(_DWORD *)((char *)a3 + v14 + 48);
        *(_DWORD *)((char *)v12 + v13 + 76) = *(_DWORD *)((char *)a3 + v14 + 52);
        *(_QWORD *)((char *)v12 + v13 + 80) = *(_QWORD *)((char *)a3 + v14 + 56);
        *(_DWORD *)((char *)v12 + v13 + 88) = *(_DWORD *)((char *)a3 + v14 + 64);
        *(_DWORD *)((char *)v12 + v13 + 92) = *(_DWORD *)((char *)a3 + v14 + 68);
        *(_QWORD *)((char *)v12 + v13 + 96) = *(_QWORD *)((char *)a3 + v14 + 112);
        *(_QWORD *)((char *)v12 + v13 + 104) = *(_QWORD *)((char *)a3 + v14 + 76);
        *(_QWORD *)((char *)v12 + v13 + 112) = *(_QWORD *)((char *)a3 + v14 + 84);
        *(_QWORD *)((char *)v12 + v13 + 120) = *(_QWORD *)((char *)a3 + v14 + 92);
        *(_QWORD *)((char *)v12 + v13 + 128) = *(_QWORD *)((char *)a3 + v14 + 100);
        *(_DWORD *)((char *)v12 + v13 + 136) = *(_DWORD *)((char *)a3 + v14 + 72);
        *(_DWORD *)((char *)v12 + v13 + 140) = (int)(*(_DWORD *)((char *)a3 + v14 + 120) << 29) >> 29;
        *(_DWORD *)((char *)v12 + v13 + 144) = *(_DWORD *)((char *)a3 + v14 + 128);
        *(_OWORD *)((char *)v12 + v13 + 148) = *(_OWORD *)((char *)a3 + v14 + 132);
        *(_OWORD *)((char *)v12 + v13 + 164) = *(_OWORD *)((char *)a3 + v14 + 148);
        *(_DWORD *)((char *)v12 + v13 + 180) = *(_DWORD *)((char *)a3 + v14 + 168);
        *(_DWORD *)((char *)v12 + v13 + 184) = *(_DWORD *)((char *)a3 + v14 + 172);
        *(_DWORD *)((char *)v12 + v13 + 188) = *(_DWORD *)((char *)a3 + v14 + 176);
        *(_QWORD *)((char *)v12 + v13 + 192) = *(_QWORD *)((char *)a3 + v14 + 180);
      }
      while ( v11 < *((unsigned __int16 *)a3 + 10) );
    }
    v15 = (char *)&v12[32 * (unsigned __int64)*((unsigned __int16 *)a3 + 10) + 18];
    memmove(v15, a4->Buffer, a4->Length);
    v12[16] = (_DWORD)v15 - (_DWORD)v12;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v12);
    operator delete(v12);
  }
}
