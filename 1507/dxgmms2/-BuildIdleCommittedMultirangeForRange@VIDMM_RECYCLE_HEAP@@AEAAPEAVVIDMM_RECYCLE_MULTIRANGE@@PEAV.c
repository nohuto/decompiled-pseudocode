/*
 * XREFs of ?BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C006560C
 * Callers:
 *     ?LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KI@Z @ 0x1C0067C4C (-LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KI@Z.c)
 * Callees:
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0064C2C (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C0066150 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0066710 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0066D48 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0066D64 (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ @ 0x1C00685CC (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0068C44 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 */

struct VIDMM_RECYCLE_MULTIRANGE *__fastcall VIDMM_RECYCLE_HEAP::BuildIdleCommittedMultirangeForRange(
        VIDMM_RECYCLE_HEAP_MGR **this,
        struct VIDMM_RECYCLE_RANGE *a2)
{
  VIDMM_RECYCLE_RANGE *v4; // rcx
  struct VIDMM_RECYCLE_RANGE *NextRange; // rax
  __int64 v6; // r8
  struct VIDMM_RECYCLE_MULTIRANGE *Multirange; // rbx
  struct VIDMM_RECYCLE_MULTIRANGE *v8; // rsi
  struct VIDMM_RECYCLE_RANGE *v9; // r14
  struct VIDMM_RECYCLE_RANGE *v10; // r15
  __int64 v11; // rax
  __int64 v12; // rax
  struct VIDMM_RECYCLE_MULTIRANGE *result; // rax

  VIDMM_RECYCLE_RANGE::GetPreviousRange(a2);
  NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(v4);
  Multirange = 0LL;
  v8 = 0LL;
  if ( v6 && (unsigned int)(*(_DWORD *)(v6 + 64) - 4) <= 1 )
    Multirange = *(struct VIDMM_RECYCLE_MULTIRANGE **)(v6 + 144);
  if ( NextRange && (*((_DWORD *)NextRange + 16) == 4 || *(_DWORD *)(v6 + 64) == 5) )
    v8 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)NextRange + 18);
  if ( Multirange )
  {
    if ( v8 )
    {
      v9 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)Multirange + 8);
      v10 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)v8 + 9);
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(this, 1LL, Multirange);
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(this, 1LL, v8);
      VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(this[1], Multirange);
      VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(this[1], v8);
      Multirange = (struct VIDMM_RECYCLE_MULTIRANGE *)VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                                                        this[1],
                                                        1LL,
                                                        *((_QWORD *)a2 + 9),
                                                        *((_QWORD *)Multirange + 4),
                                                        *((_QWORD *)v8 + 5));
      *((_QWORD *)Multirange + 8) = v9;
      *((_QWORD *)Multirange + 9) = v10;
      while ( 1 )
      {
        *((_QWORD *)v9 + 18) = Multirange;
        if ( v9 == v10 )
          break;
        v9 = VIDMM_RECYCLE_RANGE::GetNextRange(v9);
      }
    }
    else
    {
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(this, 1LL, Multirange);
      *((_QWORD *)Multirange + 9) = a2;
      v11 = *((_QWORD *)a2 + 5);
      *((_QWORD *)a2 + 18) = Multirange;
      *((_QWORD *)Multirange + 5) = v11;
    }
  }
  else if ( v8 )
  {
    VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(this, 1LL, v8);
    *((_QWORD *)v8 + 8) = a2;
    Multirange = v8;
    v12 = *((_QWORD *)a2 + 4);
    *((_QWORD *)a2 + 18) = v8;
    *((_QWORD *)v8 + 4) = v12;
  }
  else
  {
    result = (struct VIDMM_RECYCLE_MULTIRANGE *)VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                                                  this[1],
                                                  1LL,
                                                  *((_QWORD *)a2 + 9),
                                                  *((_QWORD *)a2 + 4),
                                                  *((_QWORD *)a2 + 5));
    Multirange = result;
    if ( !result )
      return result;
    *((_QWORD *)result + 8) = a2;
    *((_QWORD *)result + 9) = a2;
    *((_QWORD *)a2 + 18) = result;
  }
  VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, 1LL, (__int64)Multirange);
  VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(Multirange);
  return Multirange;
}
