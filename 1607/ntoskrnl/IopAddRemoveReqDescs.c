/*
 * XREFs of IopAddRemoveReqDescs @ 0x140557DA0
 * Callers:
 *     IopSelectNextConfiguration @ 0x140555ABC (IopSelectNextConfiguration.c)
 *     PnpFindBestConfigurationWorker @ 0x14055634C (PnpFindBestConfigurationWorker.c)
 *     PnpSelectFirstConfiguration @ 0x140556594 (PnpSelectFirstConfiguration.c)
 *     IopBootAllocation @ 0x140557CD4 (IopBootAllocation.c)
 * Callees:
 *     <none>
 */

void __fastcall IopAddRemoveReqDescs(__int64 *a1, unsigned int a2, _QWORD *a3, char a4)
{
  unsigned int i; // esi
  __int64 v9; // rdi
  __int64 v10; // rbx
  char v11; // al
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  _QWORD *v14; // rdx
  _QWORD *j; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rcx

  if ( a2 )
  {
    for ( i = 0; i < a2; ++i )
    {
      v9 = *a1;
      if ( *(_BYTE *)(*a1 + 8) )
      {
        v10 = *(_QWORD *)(v9 + 288);
        v11 = *(_BYTE *)(v10 + 104);
        if ( (v11 & 1) != 0 )
        {
          *(_BYTE *)(v10 + 104) = v11 & 0xFE;
          (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)(v10 + 24) + 32LL))(
            *(_QWORD *)(*(_QWORD *)(v10 + 24) + 8LL),
            3LL,
            0LL);
        }
        *(_BYTE *)(v10 + 105) = 1;
        v12 = (_QWORD *)(*(_QWORD *)(v9 + 32) + 40LL);
        if ( a4 )
        {
          *(_QWORD *)(*(_QWORD *)(v9 + 32) + 48LL) = *(_QWORD *)(v9 + 32) + 40LL;
          *v12 = v12;
          v13 = *(_QWORD **)(v10 + 48);
          if ( *v13 != v10 + 40 )
            __fastfail(3u);
          v12[1] = v13;
          *v12 = v10 + 40;
          *v13 = v12;
          v14 = (_QWORD *)(v10 + 88);
          *(_QWORD *)(v10 + 48) = v12;
          if ( (_QWORD *)*v14 == v14 )
          {
            for ( j = (_QWORD *)*a3; j != a3; j = (_QWORD *)*j )
            {
              if ( *(_DWORD *)(*(j - 7) + 136LL) >= *(_DWORD *)(*(_QWORD *)(v10 + 32) + 136LL) )
                break;
            }
            *v14 = j;
            *(_QWORD *)(v10 + 96) = j[1];
            *(_QWORD *)j[1] = v14;
            j[1] = v14;
          }
        }
        else
        {
          v16 = *v12;
          v17 = *(_QWORD **)(*(_QWORD *)(v9 + 32) + 48LL);
          if ( *(_QWORD **)(*v12 + 8LL) != v12 || (_QWORD *)*v17 != v12 )
            __fastfail(3u);
          *v17 = v16;
          *(_QWORD *)(v16 + 8) = v17;
          v12[1] = v12;
          *v12 = v12;
          if ( *(_QWORD *)(v10 + 40) == v10 + 40 )
          {
            v18 = (_QWORD *)(v10 + 88);
            v19 = *(_QWORD *)(v10 + 88);
            v20 = *(_QWORD **)(v10 + 96);
            if ( *(_QWORD *)(v19 + 8) != v10 + 88 || (_QWORD *)*v20 != v18 )
              __fastfail(3u);
            *v20 = v19;
            *(_QWORD *)(v19 + 8) = v20;
            *(_QWORD *)(v10 + 96) = v10 + 88;
            *v18 = v18;
          }
        }
      }
      ++a1;
    }
  }
}
