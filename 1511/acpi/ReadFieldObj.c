/*
 * XREFs of ReadFieldObj @ 0x1C0015970
 * Callers:
 *     <none>
 * Callees:
 *     GetObjectPath @ 0x1C00057B4 (GetObjectPath.c)
 *     ListRemoveEntry @ 0x1C0011778 (ListRemoveEntry.c)
 *     PushAccFieldObj @ 0x1C00131C0 (PushAccFieldObj.c)
 *     FreeNameSpaceObjects @ 0x1C0013710 (FreeNameSpaceObjects.c)
 *     AccessBaseField @ 0x1C0016130 (AccessBaseField.c)
 *     GetFieldUnitRegionObj @ 0x1C001643C (GetFieldUnitRegionObj.c)
 *     ReadBuffField @ 0x1C0018188 (ReadBuffField.c)
 *     ListInsertTail @ 0x1C0018288 (ListInsertTail.c)
 *     __security_check_cookie @ 0x1C0024C50 (__security_check_cookie.c)
 *     memmove @ 0x1C0024E80 (memmove.c)
 *     LogError @ 0x1C0043CD8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
 */

__int64 __fastcall ReadFieldObj(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int BuffField; // r12d
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int64 v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rdi
  unsigned int FieldUnitRegionObj; // eax
  __int64 ObjectPath; // rax
  int v19; // r8d
  __int64 *v20; // rdx
  void *v21; // rsi
  unsigned int v22; // ecx
  __int64 v23; // rax
  unsigned __int64 v24; // rsi
  __int64 v25; // r15
  __int64 v26; // rdi
  unsigned __int64 v27; // rcx
  __int64 v28; // r8
  size_t v29; // r14
  bool v30; // r9
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // r9d
  unsigned int v35; // edx
  unsigned int v36; // ecx
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // r15
  unsigned __int64 v40; // rsi
  __int64 v41; // rdi
  unsigned __int64 v42; // rcx
  __int64 v43; // r8
  size_t v44; // r14
  bool v45; // r9
  int v46; // ecx
  int v47; // ecx
  int v48; // ecx
  int v49; // eax
  int v50; // ecx
  int v51; // ecx
  unsigned int v52; // eax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rbx
  _QWORD **v57; // r9
  __int64 v58; // rdi
  _QWORD *v59; // rax
  _QWORD *v60; // rcx
  _QWORD *v61; // rax
  __int64 v62; // rdx
  _QWORD **v63; // rcx
  __int64 v64; // r11
  __int64 v65; // rcx
  __int64 v66; // r11
  _QWORD **v67; // rbx
  __int64 v68; // rax
  signed __int32 v69[8]; // [rsp+0h] [rbp-D9h] BYREF
  __int64 v70; // [rsp+20h] [rbp-B9h]
  __int64 v71; // [rsp+30h] [rbp-A9h] BYREF
  __int64 Src; // [rsp+38h] [rbp-A1h] BYREF
  __int64 v73; // [rsp+40h] [rbp-99h] BYREF
  _QWORD v74[10]; // [rsp+50h] [rbp-89h] BYREF
  _QWORD v75[10]; // [rsp+A0h] [rbp-39h] BYREF

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
          goto LABEL_106;
        }
        v53 = *(_QWORD *)(a2 + 32);
        ++*(_DWORD *)(a2 + 16);
        if ( *(_WORD *)(v53 + 2) == 5 )
        {
          v54 = **(_QWORD **)(v53 + 32);
          if ( *(_WORD *)(v54 + 58) == 132 )
            return PushAccFieldObj(
                     a1,
                     (__int64)WriteFieldObj,
                     **(_QWORD **)(v54 + 88) + 56LL,
                     (_DWORD *)(*(_QWORD *)(**(_QWORD **)(v54 + 88) + 88LL) + 8LL),
                     a2 + 96,
                     4u);
        }
LABEL_9:
        v10 = *(_QWORD *)(a2 + 32);
        ++*(_DWORD *)(a2 + 16);
        if ( *(_WORD *)(v10 + 2) == 14 )
        {
          BuffField = ReadBuffField(*(_QWORD *)(v10 + 32), a2 + 96, a2 + 88);
          goto LABEL_24;
        }
        v11 = *(__int64 **)(v10 + 32);
        v73 = 0LL;
        v12 = *v11;
        if ( *(_WORD *)(*v11 + 58) == 132 )
        {
          BuffField = PushAccFieldObj(
                        a1,
                        (__int64)ReadFieldObj,
                        *(_QWORD *)(*(_QWORD *)(v12 + 88) + 8LL) + 56LL,
                        (_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 88) + 8LL) + 88LL) + 8LL),
                        a2 + 88,
                        4u);
          goto LABEL_24;
        }
        BuffField = 0;
        if ( *(_WORD *)(v12 + 58) == 130 || *(_WORD *)(v12 + 58) == 131 )
        {
          v13 = **(_QWORD **)(v12 + 88);
          v73 = v13;
        }
        else
        {
          if ( *(_WORD *)(v12 + 58) != 132 )
          {
            LogError(3222536195LL);
            PrintDebugMessage(56, MEMORY[0x3A], 0, 0, 0LL);
            BuffField = -1072431101;
            goto LABEL_17;
          }
          FieldUnitRegionObj = GetFieldUnitRegionObj(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 88) + 8LL) + 88LL), &v73);
          v13 = v73;
          BuffField = FieldUnitRegionObj;
        }
        if ( !v13 || *(_WORD *)(v13 + 58) == 10 )
        {
          if ( (BuffField & 0x80000000) == 0 && v13 )
          {
            if ( (gdwfAMLI & 4) != 0 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v13 + 104));
              v13 = v73;
            }
            goto LABEL_18;
          }
        }
        else
        {
          LogError(3222536195LL);
          ObjectPath = GetObjectPath(v13);
          v19 = *(unsigned __int16 *)(v13 + 58);
          v20 = qword_1C00254F0;
          v70 = 0LL;
          v21 = (void *)ObjectPath;
          if ( ObjectPath )
            LODWORD(v20) = ObjectPath;
          PrintDebugMessage(55, (_DWORD)v20, v19, 0, v70);
          BuffField = -1072431101;
          if ( v21 )
            ExFreePoolWithTag(v21, 0);
        }
LABEL_17:
        v13 = 0LL;
        v73 = 0LL;
LABEL_18:
        if ( BuffField )
          return BuffField;
        if ( v13 )
        {
          BuffField = AccessBaseField(a1, v13, (int)a2 + 96, (int)a2 + 88, 1);
          if ( (gdwfAMLI & 4) != 0 && !_InterlockedDecrement((volatile signed __int32 *)(v13 + 104)) )
          {
            v14 = v73;
            *(_WORD *)(v73 + 56) |= 4u;
            if ( (*(_WORD *)(v14 + 56) & 0x40) == 0 )
              FreeNameSpaceObjects(v14);
          }
        }
LABEL_24:
        if ( BuffField || a2 != *(_QWORD *)(a1 + 416) )
          return BuffField;
LABEL_26:
        if ( !*(_DWORD *)(a2 + 80) )
          goto LABEL_68;
        v15 = *(_DWORD *)(a2 + 76);
        if ( v15 < 0x40 )
          v16 = 1LL << v15;
        else
          v16 = 0LL;
        v22 = *(_DWORD *)(a2 + 72);
        if ( v22 < 0x40 )
          v23 = *(_QWORD *)(a2 + 88) << v22;
        else
          v23 = 0LL;
        v24 = *(_QWORD *)(a2 + 40);
        v25 = v23 & *(_QWORD *)(a2 + 64);
        v26 = (v16 - 1) << v22;
        v27 = *(unsigned int *)(a2 + 56);
        v28 = 0LL;
        Src = 0LL;
        v74[0] = 0LL;
        v74[1] = 255LL;
        v74[2] = 0xFFFFLL;
        v74[3] = 0LL;
        v74[4] = 0xFFFFFFFFLL;
        memset(&v74[5], 0, 24);
        v74[8] = -1LL;
        if ( (unsigned int)v27 <= 8 )
        {
          v29 = (unsigned int)v27;
          v30 = v26 == v74[v27];
          if ( v24 % v27 )
          {
            if ( v26 != v74[v27] )
            {
              memmove(&Src, (const void *)v24, (unsigned int)v27);
              v28 = Src;
            }
            Src = v25 | v28 & ~v26;
            memmove((void *)v24, &Src, v29);
          }
          else
          {
            v31 = v27 - 1;
            if ( !v31 )
            {
              if ( !v30 )
                v28 = *(unsigned __int8 *)v24;
              Src = v25 | v28 & ~v26;
              *(_BYTE *)v24 = Src;
              goto LABEL_66;
            }
            v32 = v31 - 1;
            if ( !v32 )
            {
              if ( !v30 )
                v28 = *(unsigned __int16 *)v24;
              Src = v25 | v28 & ~v26;
              *(_WORD *)v24 = Src;
              goto LABEL_66;
            }
            v33 = v32 - 2;
            if ( !v33 )
            {
              if ( !v30 )
                v28 = *(unsigned int *)v24;
              Src = v25 | v28 & ~v26;
              *(_DWORD *)v24 = Src;
LABEL_66:
              _InterlockedOr(v69, 0);
              goto LABEL_67;
            }
            if ( v33 == 4 )
            {
              if ( !v30 )
                v28 = *(_QWORD *)v24;
              Src = v25 | v28 & ~v26;
              *(_QWORD *)v24 = Src;
              KeFlushWriteBuffer();
            }
          }
        }
LABEL_67:
        *(_QWORD *)(a2 + 40) += *(unsigned int *)(a2 + 56);
        if ( *(_QWORD *)(a2 + 40) >= *(_QWORD *)(a2 + 48) )
          goto LABEL_105;
LABEL_68:
        v34 = *(_DWORD *)(a2 + 76);
        v35 = *(_DWORD *)(a2 + 72);
        *(_QWORD *)(a2 + 88) >>= v34;
        v36 = *(_DWORD *)(a2 + 104);
        if ( v36 < v35 )
        {
          if ( v36 < 0x40 )
            v37 = 1LL << v36;
          else
            v37 = 0LL;
          *(_QWORD *)(a2 + 88) &= v37 - 1;
        }
        if ( v35 < 0x40 )
          v38 = 1LL << v35;
        else
          v38 = 0LL;
        v39 = *(_QWORD *)(a2 + 88);
        v40 = *(_QWORD *)(a2 + 40);
        v41 = (v38 - 1) >> v34;
        v42 = *(unsigned int *)(a2 + 56);
        v43 = 0LL;
        v71 = 0LL;
        v75[0] = 0LL;
        v75[1] = 255LL;
        v75[2] = 0xFFFFLL;
        v75[3] = 0LL;
        v75[4] = 0xFFFFFFFFLL;
        memset(&v75[5], 0, 24);
        v75[8] = -1LL;
        if ( (unsigned int)v42 <= 8 )
        {
          v44 = (unsigned int)v42;
          v45 = v41 == v75[v42];
          if ( v40 % v42 )
          {
            if ( v41 != v75[v42] )
            {
              memmove(&v71, (const void *)v40, (unsigned int)v42);
              v43 = v71;
            }
            v71 = v39 | v43 & ~v41;
            memmove((void *)v40, &v71, v44);
          }
          else
          {
            v46 = v42 - 1;
            if ( !v46 )
            {
              if ( !v45 )
                v43 = *(unsigned __int8 *)v40;
              v71 = v39 | v43 & ~v41;
              *(_BYTE *)v40 = v71;
              goto LABEL_97;
            }
            v47 = v46 - 1;
            if ( !v47 )
            {
              if ( !v45 )
                v43 = *(unsigned __int16 *)v40;
              v71 = v39 | v43 & ~v41;
              *(_WORD *)v40 = v71;
              goto LABEL_97;
            }
            v48 = v47 - 2;
            if ( !v48 )
            {
              if ( !v45 )
                v43 = *(unsigned int *)v40;
              v71 = v39 | v43 & ~v41;
              *(_DWORD *)v40 = v71;
LABEL_97:
              _InterlockedOr(v69, 0);
              goto LABEL_98;
            }
            if ( v48 == 4 )
            {
              if ( !v45 )
                v43 = *(_QWORD *)v40;
              v71 = v39 | v43 & ~v41;
              *(_QWORD *)v40 = v71;
              KeFlushWriteBuffer();
            }
          }
        }
LABEL_98:
        v49 = *(_DWORD *)(a2 + 56);
        *(_DWORD *)(a2 + 96) += v49;
        v50 = *(_DWORD *)(a2 + 100);
        ++*(_DWORD *)(a2 + 80);
        *(_DWORD *)(a2 + 100) = 0;
        v51 = v50 - 8 * v49;
        v52 = *(_DWORD *)(a2 + 80);
        *(_DWORD *)(a2 + 104) += v51;
        if ( v52 >= *(_DWORD *)(a2 + 60) )
        {
LABEL_105:
          ++*(_DWORD *)(a2 + 16);
LABEL_106:
          v55 = *(_QWORD *)(a1 + 416);
          v56 = v55 - 16;
          *(_QWORD *)(a1 + 416) = *(_QWORD *)(v55 + 8);
          *(_DWORD *)(v55 - 16) = 0;
          byte_1C005AAD8 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
          v57 = (_QWORD **)(v56 + 16);
          v58 = *(_QWORD *)(v56 + 8);
          v59 = *(_QWORD **)(v58 + 40);
          if ( v59 )
          {
            v60 = *(_QWORD **)(v58 + 40);
            while ( v57 >= v60 )
            {
              v60 = (_QWORD *)v60[1];
              if ( v60 == v59 )
              {
                if ( v57 >= v60 )
                {
                  ListInsertTail(v56 + 16, v58 + 40);
                  goto LABEL_116;
                }
                break;
              }
            }
            *(_QWORD *)(v56 + 24) = v60;
            v61 = (_QWORD *)*v60;
            *v57 = (_QWORD *)*v60;
            v61[1] = v57;
            **(_QWORD **)(v56 + 24) = v57;
            if ( *(_QWORD **)(v58 + 40) != v60 )
              goto LABEL_116;
          }
          else
          {
            *(_QWORD *)(v58 + 40) = v57;
            *(_QWORD *)(v56 + 24) = v56 + 16;
            *v57 = v57;
          }
          *(_QWORD *)(v58 + 40) = v57;
LABEL_116:
          v62 = *(unsigned int *)(v56 + 4);
          v63 = (_QWORD **)(v62 + v56 + 16);
          if ( *(_QWORD ***)(v56 + 24) == v63 )
          {
            *(_DWORD *)(v56 + 4) = *(_DWORD *)(v62 + v56 + 4) + v62;
            ListRemoveEntry(v63, v58 + 40);
          }
          v64 = (__int64)(*v57 - 2);
          v65 = *(unsigned int *)(v64 + 4);
          if ( v56 == v64 + v65 )
          {
            *(_DWORD *)(v64 + 4) = v65 + *(_DWORD *)(v56 + 4);
            ListRemoveEntry(v57, v58 + 40);
            v56 = v66;
          }
          if ( *(_QWORD *)(v58 + 32) <= v56 + (unsigned __int64)*(unsigned int *)(v56 + 4) )
          {
            *(_QWORD *)(v58 + 32) = v56;
            v67 = (_QWORD **)(v56 + 16);
            if ( v67[1] == v67 )
            {
              *(_QWORD *)(v58 + 40) = 0LL;
            }
            else
            {
              v68 = *(_QWORD *)(v58 + 40);
              if ( v67 == (_QWORD **)v68 )
                *(_QWORD *)(v58 + 40) = *(_QWORD *)(v68 + 8);
              *v67[1] = *v67;
              (*v67)[1] = v67[1];
            }
          }
          KeReleaseSpinLock(&gmutHeap, byte_1C005AAD8);
          return BuffField;
        }
        *(_DWORD *)(a2 + 16) -= 2;
      }
    }
  }
  v7 = v6 - 1;
  if ( !v7 )
    goto LABEL_9;
  v8 = v7 - 1;
  if ( !v8 )
    goto LABEL_26;
  if ( v8 == 1 )
    goto LABEL_106;
  return a3;
}
