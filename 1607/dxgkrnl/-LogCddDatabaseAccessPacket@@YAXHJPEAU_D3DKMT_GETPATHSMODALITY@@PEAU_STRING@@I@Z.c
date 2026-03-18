/*
 * XREFs of ?LogCddDatabaseAccessPacket@@YAXHJPEAU_D3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z @ 0x1C00C0F88
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C008CD28 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C008D0CC (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DxgkWriteDiagEntry @ 0x1C00C0600 (DxgkWriteDiagEntry.c)
 */

void __fastcall LogCddDatabaseAccessPacket(
        int a1,
        int a2,
        struct _D3DKMT_GETPATHSMODALITY *a3,
        struct _STRING *a4,
        unsigned int a5)
{
  unsigned int v9; // r14d
  _DWORD *v10; // rax
  unsigned int v11; // esi
  _DWORD *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  char *v15; // rbx

  v9 = 136 * *((unsigned __int16 *)a3 + 10) + a4->Length + 73;
  v10 = operator new(v9, 0x63644356u, PagedPool);
  v11 = 0;
  v12 = v10;
  if ( v10 )
  {
    memset(v10, 0, v9);
    *v12 = 17;
    v12[1] = v9;
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
        v14 = 34 * v13;
        v12[v14 + 18] = *((_DWORD *)a3 + 54 * v13 + 12);
        v12[v14 + 19] = *((_DWORD *)a3 + 54 * v13 + 13);
        *(_QWORD *)&v12[v14 + 20] = *((_QWORD *)a3 + 27 * v13 + 7);
        v12[v14 + 22] = *((_DWORD *)a3 + 54 * v13 + 16);
        v12[v14 + 23] = *((_DWORD *)a3 + 54 * v13 + 17);
        *(_QWORD *)&v12[v14 + 24] = *((_QWORD *)a3 + 27 * v13 + 14);
        *(_QWORD *)&v12[v14 + 26] = *(_QWORD *)((char *)a3 + 216 * v13 + 76);
        *(_QWORD *)&v12[v14 + 28] = *(_QWORD *)((char *)a3 + 216 * v13 + 84);
        *(_QWORD *)&v12[v14 + 30] = *(_QWORD *)((char *)a3 + 216 * v13 + 92);
        *(_QWORD *)&v12[v14 + 32] = *(_QWORD *)((char *)a3 + 216 * v13 + 100);
        v12[v14 + 34] = *((_DWORD *)a3 + 54 * v13 + 18);
        v12[v14 + 35] = (int)(*((_DWORD *)a3 + 54 * v13 + 30) << 29) >> 29;
        v12[v14 + 36] = *((_DWORD *)a3 + 54 * v13 + 32);
        v12[v14 + 37] = *((_DWORD *)a3 + 54 * v13 + 33);
        *(_OWORD *)&v12[v14 + 38] = *(_OWORD *)((char *)a3 + 216 * v13 + 136);
        *(_OWORD *)&v12[v14 + 42] = *(_OWORD *)((char *)a3 + 216 * v13 + 152);
        v12[v14 + 46] = *((_DWORD *)a3 + 54 * v13 + 43);
        v12[v14 + 47] = *((_DWORD *)a3 + 54 * v13 + 44);
        v12[v14 + 48] = *((_DWORD *)a3 + 54 * v13 + 45);
        *(_QWORD *)&v12[v14 + 49] = *((_QWORD *)a3 + 27 * v13 + 23);
      }
      while ( v11 < *((unsigned __int16 *)a3 + 10) );
    }
    v15 = (char *)&v12[34 * *((unsigned __int16 *)a3 + 10) + 18];
    memmove(v15, a4->Buffer, a4->Length);
    v12[16] = (_DWORD)v15 - (_DWORD)v12;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v12);
    operator delete(v12);
  }
}
