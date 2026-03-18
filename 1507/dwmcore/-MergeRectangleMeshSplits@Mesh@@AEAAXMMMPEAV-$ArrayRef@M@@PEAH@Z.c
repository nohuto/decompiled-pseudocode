/*
 * XREFs of ?MergeRectangleMeshSplits@Mesh@@AEAAXMMMPEAV?$ArrayRef@M@@PEAH@Z @ 0x180075658
 * Callers:
 *     ?CreateRectangleMesh@Mesh@@QEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x180075B0C (-CreateRectangleMesh@Mesh@@QEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 * Callees:
 *     <none>
 */

int *__fastcall Mesh::MergeRectangleMeshSplits(__int64 a1, float a2, float a3, float a4, __int64 a5, int *a6)
{
  int v6; // esi
  float *v8; // rcx
  __int64 v9; // rbx
  int v10; // r10d
  int v11; // eax
  int v12; // edi
  __int64 v13; // r11
  __int64 v14; // rdx
  float *v15; // r9
  float v16; // xmm1_4
  int *result; // rax

  v6 = 0;
  v8 = *(float **)a5;
  v9 = *(int *)(a5 + 8);
  if ( a3 <= **(float **)a5 )
    a3 = *v8;
  if ( v8[v9 - 1] <= a4 )
    a4 = v8[v9 - 1];
  if ( a3 > *v8 )
    *v8 = a3;
  v10 = 0;
  v11 = 1;
  v12 = 1;
  if ( (int)v9 > 1 )
  {
    v13 = 1LL;
    v14 = 1LL;
    v15 = v8;
    do
    {
      v16 = v8[v13];
      if ( a2 <= (float)(v16 - a3) )
      {
        if ( a2 > (float)(a4 - v16) )
          break;
        if ( a2 <= (float)(v16 - *v15) )
        {
          if ( v14 != v13 )
            v8[v14] = v16;
          ++v11;
          ++v14;
          ++v15;
          v10 = 0;
        }
        else
        {
          ++v10;
          v8[v14] = v16;
          v6 = 1;
          if ( v10 == 1 )
          {
            ++v11;
            ++v14;
            ++v15;
          }
        }
      }
      ++v12;
      ++v13;
    }
    while ( v12 < (int)v9 );
  }
  if ( (float)(a4 - v8[v11 - 1]) >= a2 )
    v8[v11++] = a4;
  *(_DWORD *)(a5 + 8) = v11;
  result = a6;
  *(_QWORD *)a5 = v8;
  *a6 = v6;
  return result;
}
