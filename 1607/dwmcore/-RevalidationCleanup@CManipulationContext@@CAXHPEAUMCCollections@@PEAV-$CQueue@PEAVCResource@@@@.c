/*
 * XREFs of ?RevalidationCleanup@CManipulationContext@@CAXHPEAUMCCollections@@PEAV?$CQueue@PEAVCResource@@@@@Z @ 0x1801722B4
 * Callers:
 *     ?Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV?$CQueue@PEAVCResource@@@@@Z @ 0x1801714FC (-Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV-$CQueue@PEAVCResource@@@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ @ 0x180007904 (-InternalRelease@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_G?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x180007930 (--_G-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A5868 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Insert@?$CQueue@PEAVCBufferedInteractionOutput@@@@AEAAJ_NPEAVCBufferedInteractionOutput@@@Z @ 0x1801703AC (-Insert@-$CQueue@PEAVCBufferedInteractionOutput@@@@AEAAJ_NPEAVCBufferedInteractionOutput@@@Z.c)
 */

void __fastcall CManipulationContext::RevalidationCleanup(int a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 v4; // rsi
  int v5; // r12d
  __int64 v6; // r14
  int v7; // ebp
  __int64 (__fastcall ***v8)(_QWORD); // rbx
  __int64 v9; // rdx
  int v10; // r13d
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 *v13; // rax
  __int64 v14; // r8
  __int64 v15; // rax
  int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-48h]
  __int64 (__fastcall ***v21)(_QWORD); // [rsp+88h] [rbp+20h] BYREF

  if ( a1 > 0 )
  {
    v3 = 0;
    v4 = a2;
    v5 = a1;
    v6 = 0LL;
    v7 = 1;
    do
    {
      v21 = *(__int64 (__fastcall ****)(_QWORD))(v6 + *(_QWORD *)(v4 + 24));
      v8 = v21;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v21);
      if ( (*((_BYTE *)v8 + 28) & 4) != 0 )
      {
        v10 = 0;
        if ( *((int *)v8 + 18) > 0 )
        {
          v11 = 0LL;
          v18 = 0LL;
          do
          {
            v12 = *(__int64 *)((char *)v8[8] + v11);
            if ( v12 )
            {
              do
              {
                v13 = (__int64 *)(v12 + 264);
                if ( !*(_QWORD *)(v12 + 264) )
                  break;
                v12 = *v13;
                *v13 = 0LL;
                v14 = v12 ? v12 + 8 : 0LL;
                CQueue<CBufferedInteractionOutput *>::Insert(a3, v9, v14);
              }
              while ( v12 );
              v11 = v18;
            }
            v11 += 8LL;
            ++v10;
            v18 = v11;
          }
          while ( v10 < *((_DWORD *)v8 + 18) );
          v4 = a2;
        }
        v15 = *(_QWORD *)(v4 + 24);
        if ( *(_QWORD *)(*(_QWORD *)(v15 + v6) + 48LL) )
        {
          *((_BYTE *)v8 + 28) &= ~4u;
        }
        else
        {
          if ( v3 >= 0 && v7 <= *(_DWORD *)(v4 + 32) )
          {
            Microsoft::WRL::ComPtr<CManipulationContext>::`scalar deleting destructor'((__int64 *)(v15 + 8LL * v3));
            v16 = *(_DWORD *)(v4 + 32);
            if ( v7 != v16 )
            {
              v17 = *(_QWORD *)(v4 + 24) + 8LL * v3;
              memmove((void *)v17, (const void *)(v17 + 8), 8LL * (v16 - v3 - 1));
            }
            --*(_DWORD *)(v4 + 32);
          }
          --v5;
          --v3;
          --v7;
          v6 -= 8LL;
        }
      }
      Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((__int64 *)&v21);
      ++v3;
      ++v7;
      v6 += 8LL;
    }
    while ( v3 < v5 );
  }
}
