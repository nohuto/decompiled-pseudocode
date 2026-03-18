/*
 * XREFs of ReadFieldObj @ 0x1C0014A40
 * Callers:
 *     <none>
 * Callees:
 *     GetObjectPath @ 0x1C0005854 (GetObjectPath.c)
 *     ListRemoveEntry @ 0x1C0010770 (ListRemoveEntry.c)
 *     FreeNameSpaceObjects @ 0x1C0011A80 (FreeNameSpaceObjects.c)
 *     PushAccFieldObj @ 0x1C0012040 (PushAccFieldObj.c)
 *     AccessBaseField @ 0x1C0015020 (AccessBaseField.c)
 *     GetFieldUnitRegionObj @ 0x1C001532C (GetFieldUnitRegionObj.c)
 *     ReadBuffField @ 0x1C0016DA0 (ReadBuffField.c)
 *     ListInsertTail @ 0x1C0017CB4 (ListInsertTail.c)
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 *     memmove @ 0x1C0023800 (memmove.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 */

__int64 __fastcall ReadFieldObj(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int BuffField; // esi
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rcx
  int v12; // edx
  __int64 v13; // rdi
  int v14; // r8d
  unsigned int v15; // ecx
  unsigned int v16; // edx
  __int64 v17; // rdi
  __int64 v18; // r12
  unsigned __int64 v19; // r15
  __int64 v20; // rdi
  size_t v21; // rcx
  __int64 v22; // r9
  size_t v23; // r14
  unsigned __int64 v24; // rdx
  int v25; // eax
  int v26; // ecx
  int v27; // ecx
  unsigned int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rbx
  _QWORD **v31; // r9
  __int64 v32; // rdi
  _QWORD *v33; // rax
  __int64 v34; // rdx
  _QWORD **v35; // rcx
  __int64 v36; // r11
  __int64 v37; // rcx
  _QWORD **v38; // rbx
  unsigned int v40; // eax
  __int64 v41; // rdi
  unsigned int v42; // ecx
  __int64 v43; // rax
  unsigned __int64 v44; // r15
  __int64 v45; // r12
  __int64 v46; // rdi
  size_t v47; // rcx
  __int64 v48; // r8
  size_t v49; // r14
  unsigned __int64 v50; // rdx
  int v51; // eax
  int v52; // eax
  __int64 v53; // rax
  _QWORD *v54; // rcx
  __int64 v55; // rax
  _QWORD *v56; // rax
  int v57; // edx
  unsigned int FieldUnitRegionObj; // eax
  __int64 ObjectPath; // rax
  int v60; // r8d
  __int64 *v61; // rdx
  void *v62; // r14
  __int64 v63; // rcx
  __int64 v64; // r11
  signed __int32 v65[8]; // [rsp+0h] [rbp-D9h] BYREF
  __int64 v66; // [rsp+20h] [rbp-B9h]
  __int64 v67; // [rsp+30h] [rbp-A9h] BYREF
  __int64 Src; // [rsp+38h] [rbp-A1h] BYREF
  __int64 v69; // [rsp+40h] [rbp-99h] BYREF
  _QWORD v70[10]; // [rsp+50h] [rbp-89h] BYREF
  _QWORD v71[10]; // [rsp+A0h] [rbp-39h] BYREF

  BuffField = a3;
  if ( a3 )
  {
    v6 = 3;
  }
  else
  {
    v6 = *(_DWORD *)(a2 + 16) & 0xF;
    if ( !v6 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(a2 + 80) >= *(_DWORD *)(a2 + 60) )
        {
          *(_DWORD *)(a2 + 16) += 3;
          goto LABEL_36;
        }
        v7 = *(_QWORD *)(a2 + 32);
        ++*(_DWORD *)(a2 + 16);
        if ( *(_WORD *)(v7 + 2) == 5 )
        {
          v8 = **(_QWORD **)(v7 + 32);
          if ( *(_WORD *)(v8 + 58) == 132 )
            return PushAccFieldObj(
                     a1,
                     (__int64)WriteFieldObj,
                     **(_QWORD **)(v8 + 88) + 56LL,
                     (_DWORD *)(*(_QWORD *)(**(_QWORD **)(v8 + 88) + 88LL) + 8LL),
                     a2 + 96,
                     4u);
        }
LABEL_6:
        v9 = *(_QWORD *)(a2 + 32);
        ++*(_DWORD *)(a2 + 16);
        if ( *(_WORD *)(v9 + 2) == 14 )
        {
          BuffField = ReadBuffField(*(_QWORD *)(v9 + 32), a2 + 96, a2 + 88);
          goto LABEL_19;
        }
        v10 = *(__int64 **)(v9 + 32);
        v69 = 0LL;
        v11 = *v10;
        if ( *(_WORD *)(*v10 + 58) == 132 )
        {
          BuffField = PushAccFieldObj(
                        a1,
                        (__int64)ReadFieldObj,
                        *(_QWORD *)(*(_QWORD *)(v11 + 88) + 8LL) + 56LL,
                        (_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 88) + 8LL) + 88LL) + 8LL),
                        a2 + 88,
                        4u);
          goto LABEL_19;
        }
        v12 = *(unsigned __int16 *)(v11 + 58);
        BuffField = 0;
        if ( v12 == 131 || (v57 = v12 - 130) == 0 )
        {
          v13 = **(_QWORD **)(v11 + 88);
          v69 = v13;
        }
        else
        {
          if ( v57 != 2 )
          {
            LogError(3222536195LL);
            PrintDebugMessage(56, MEMORY[0x3A], 0, 0, 0LL);
            BuffField = -1072431101;
            goto LABEL_99;
          }
          FieldUnitRegionObj = GetFieldUnitRegionObj(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 88) + 8LL) + 88LL), &v69);
          v13 = v69;
          BuffField = FieldUnitRegionObj;
        }
        if ( v13 && *(_WORD *)(v13 + 58) != 10 )
        {
          LogError(3222536195LL);
          ObjectPath = GetObjectPath(v13);
          v60 = *(unsigned __int16 *)(v13 + 58);
          v61 = qword_1C0023E70;
          v66 = 0LL;
          v62 = (void *)ObjectPath;
          if ( ObjectPath )
            LODWORD(v61) = ObjectPath;
          PrintDebugMessage(55, (_DWORD)v61, v60, 0, v66);
          BuffField = -1072431101;
          if ( v62 )
            ExFreePoolWithTag(v62, 0);
        }
        else if ( (BuffField & 0x80000000) == 0 && v13 )
        {
          if ( (gdwfAMLI & 4) != 0 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v13 + 104));
            v13 = v69;
          }
          goto LABEL_16;
        }
LABEL_99:
        v69 = 0LL;
        v13 = 0LL;
LABEL_16:
        if ( BuffField )
          return BuffField;
        if ( v13 )
        {
          BuffField = AccessBaseField(a1, v13, (int)a2 + 96, (int)a2 + 88, 1);
          if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 104), 0xFFFFFFFF) == 1 )
          {
            v63 = v69;
            *(_WORD *)(v69 + 56) |= 4u;
            if ( (*(_WORD *)(v63 + 56) & 0x40) == 0 )
              FreeNameSpaceObjects(v63);
          }
        }
LABEL_19:
        if ( BuffField || a2 != *(_QWORD *)(a1 + 416) )
          return BuffField;
LABEL_21:
        if ( !*(_DWORD *)(a2 + 80) )
          goto LABEL_22;
        v40 = *(_DWORD *)(a2 + 76);
        if ( v40 >= 0x40 )
          v41 = 0LL;
        else
          v41 = 1LL << v40;
        v42 = *(_DWORD *)(a2 + 72);
        if ( v42 >= 0x40 )
          v43 = 0LL;
        else
          v43 = *(_QWORD *)(a2 + 88) << v42;
        v44 = *(_QWORD *)(a2 + 40);
        v45 = v43 & *(_QWORD *)(a2 + 64);
        v46 = (v41 - 1) << v42;
        v47 = *(unsigned int *)(a2 + 56);
        v48 = 0LL;
        Src = 0LL;
        v70[0] = 0LL;
        v70[1] = 255LL;
        v70[2] = 0xFFFFLL;
        v70[3] = 0LL;
        v70[4] = 0xFFFFFFFFLL;
        memset(&v70[5], 0, 24);
        v70[8] = -1LL;
        if ( (unsigned int)v47 <= 8 )
        {
          v49 = (unsigned int)v47;
          if ( v47 == 1 )
            v50 = 0LL;
          else
            v50 = v44 % (unsigned int)v47;
          if ( v50 )
          {
            if ( v46 != v70[v47] )
            {
              memmove(&Src, (const void *)v44, v47);
              v48 = Src;
            }
            Src = v45 | v48 & ~v46;
            memmove((void *)v44, &Src, v49);
          }
          else
          {
            switch ( (_DWORD)v47 )
            {
              case 1:
                if ( v46 != v70[v47] )
                  v48 = *(unsigned __int8 *)v44;
                Src = v45 | v48 & ~v46;
                *(_BYTE *)v44 = Src;
LABEL_60:
                _InterlockedOr(v65, 0);
                break;
              case 2:
                if ( v46 != v70[v47] )
                  v48 = *(unsigned __int16 *)v44;
                Src = v45 | v48 & ~v46;
                *(_WORD *)v44 = Src;
                goto LABEL_60;
              case 4:
                if ( v46 != v70[v47] )
                  v48 = *(unsigned int *)v44;
                Src = v45 | v48 & ~v46;
                *(_DWORD *)v44 = Src;
                goto LABEL_60;
              case 8:
                if ( v46 != v70[v47] )
                  v48 = *(_QWORD *)v44;
                Src = v45 | v48 & ~v46;
                *(_QWORD *)v44 = Src;
                KeFlushWriteBuffer();
                break;
            }
          }
        }
        *(_QWORD *)(a2 + 40) += *(unsigned int *)(a2 + 56);
        if ( *(_QWORD *)(a2 + 40) >= *(_QWORD *)(a2 + 48) )
        {
LABEL_35:
          ++*(_DWORD *)(a2 + 16);
          goto LABEL_36;
        }
LABEL_22:
        v14 = *(_DWORD *)(a2 + 76);
        *(_QWORD *)(a2 + 88) >>= v14;
        v15 = *(_DWORD *)(a2 + 104);
        v16 = *(_DWORD *)(a2 + 72);
        if ( v15 < v16 )
        {
          if ( v15 >= 0x40 )
            v53 = 0LL;
          else
            v53 = 1LL << v15;
          *(_QWORD *)(a2 + 88) &= v53 - 1;
        }
        if ( v16 >= 0x40 )
          v17 = 0LL;
        else
          v17 = 1LL << v16;
        v18 = *(_QWORD *)(a2 + 88);
        v19 = *(_QWORD *)(a2 + 40);
        v20 = (v17 - 1) >> v14;
        v21 = *(unsigned int *)(a2 + 56);
        v22 = 0LL;
        v67 = 0LL;
        v71[0] = 0LL;
        v71[1] = 255LL;
        v71[2] = 0xFFFFLL;
        v71[3] = 0LL;
        v71[4] = 0xFFFFFFFFLL;
        memset(&v71[5], 0, 24);
        v71[8] = -1LL;
        if ( (unsigned int)v21 <= 8 )
        {
          v23 = (unsigned int)v21;
          if ( v21 == 1 )
            v24 = 0LL;
          else
            v24 = v19 % (unsigned int)v21;
          if ( v24 )
          {
            if ( v20 != v71[v21] )
            {
              memmove(&v67, (const void *)v19, v21);
              v22 = v67;
            }
            v67 = v18 | v22 & ~v20;
            memmove((void *)v19, &v67, v23);
          }
          else
          {
            switch ( (_DWORD)v21 )
            {
              case 1:
                if ( v20 != v71[v21] )
                  v22 = *(unsigned __int8 *)v19;
                v67 = v18 | v22 & ~v20;
                *(_BYTE *)v19 = v67;
LABEL_33:
                _InterlockedOr(v65, 0);
                break;
              case 4:
                if ( v20 != v71[v21] )
                  v22 = *(unsigned int *)v19;
                v67 = v18 | v22 & ~v20;
                *(_DWORD *)v19 = v67;
                goto LABEL_33;
              case 2:
                if ( v20 != v71[v21] )
                  v22 = *(unsigned __int16 *)v19;
                v67 = v18 | v22 & ~v20;
                *(_WORD *)v19 = v67;
                goto LABEL_33;
              case 8:
                if ( v20 != v71[v21] )
                  v22 = *(_QWORD *)v19;
                v67 = v18 | v22 & ~v20;
                *(_QWORD *)v19 = v67;
                KeFlushWriteBuffer();
                break;
            }
          }
        }
        v25 = *(_DWORD *)(a2 + 56);
        *(_DWORD *)(a2 + 96) += v25;
        v26 = *(_DWORD *)(a2 + 100);
        ++*(_DWORD *)(a2 + 80);
        *(_DWORD *)(a2 + 100) = 0;
        v27 = v26 - 8 * v25;
        v28 = *(_DWORD *)(a2 + 80);
        *(_DWORD *)(a2 + 104) += v27;
        if ( v28 >= *(_DWORD *)(a2 + 60) )
          goto LABEL_35;
        *(_DWORD *)(a2 + 16) -= 2;
      }
    }
  }
  v51 = v6 - 1;
  if ( !v51 )
    goto LABEL_6;
  v52 = v51 - 1;
  if ( !v52 )
    goto LABEL_21;
  if ( v52 != 1 )
    return a3;
LABEL_36:
  v29 = *(_QWORD *)(a1 + 416);
  v30 = v29 - 16;
  *(_QWORD *)(a1 + 416) = *(_QWORD *)(v29 + 8);
  *(_DWORD *)(v29 - 16) = 0;
  byte_1C005AAF8 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v31 = (_QWORD **)(v30 + 16);
  v32 = *(_QWORD *)(v30 + 8);
  v33 = *(_QWORD **)(v32 + 40);
  if ( !v33 )
  {
    *(_QWORD *)(v32 + 40) = v31;
    *(_QWORD *)(v30 + 24) = v30 + 16;
    *v31 = v31;
LABEL_38:
    *(_QWORD *)(v32 + 40) = v31;
    goto LABEL_39;
  }
  v54 = *(_QWORD **)(v32 + 40);
  while ( v31 >= v54 )
  {
    v54 = (_QWORD *)v54[1];
    if ( v54 == v33 )
    {
      if ( v31 >= v54 )
      {
        ListInsertTail(v30 + 16, v32 + 40);
        goto LABEL_39;
      }
      break;
    }
  }
  *(_QWORD *)(v30 + 24) = v54;
  v56 = (_QWORD *)*v54;
  *v31 = (_QWORD *)*v54;
  v56[1] = v31;
  **(_QWORD **)(v30 + 24) = v31;
  if ( *(_QWORD **)(v32 + 40) == v54 )
    goto LABEL_38;
LABEL_39:
  v34 = *(unsigned int *)(v30 + 4);
  v35 = (_QWORD **)(v34 + v30 + 16);
  if ( *(_QWORD ***)(v30 + 24) == v35 )
  {
    *(_DWORD *)(v30 + 4) = *(_DWORD *)(v34 + v30 + 4) + v34;
    ListRemoveEntry(v35, v32 + 40);
  }
  v36 = (__int64)(*v31 - 2);
  v37 = *(unsigned int *)(v36 + 4);
  if ( v30 == v36 + v37 )
  {
    *(_DWORD *)(v36 + 4) = v37 + *(_DWORD *)(v30 + 4);
    ListRemoveEntry(v31, v32 + 40);
    v30 = v64;
  }
  if ( *(_QWORD *)(v32 + 32) <= v30 + (unsigned __int64)*(unsigned int *)(v30 + 4) )
  {
    *(_QWORD *)(v32 + 32) = v30;
    v38 = (_QWORD **)(v30 + 16);
    if ( v38[1] == v38 )
    {
      *(_QWORD *)(v32 + 40) = 0LL;
    }
    else
    {
      v55 = *(_QWORD *)(v32 + 40);
      if ( v38 == (_QWORD **)v55 )
        *(_QWORD *)(v32 + 40) = *(_QWORD *)(v55 + 8);
      *v38[1] = *v38;
      (*v38)[1] = v38[1];
    }
  }
  KeReleaseSpinLock(&gmutHeap, byte_1C005AAF8);
  return BuffField;
}
